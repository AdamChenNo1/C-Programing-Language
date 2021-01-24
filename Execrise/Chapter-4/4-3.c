/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-22 22:29:45
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 22:57:00
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-3.c
 */
#include <stdio.h>
#include <stdlib.h> /*为了使用atof函数*/
#include <ctype.h>
#include <math.h>

#define MAXOP 100  /*操作数或操作符的最大长度*/
#define NUMBER '0' /*标识找到一个数*/

int getop(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

/* 逆波兰计算器*/
int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) //每次循环对一个运算符及相应的操作数执行一次操作
    {
        switch (type)
        {
        case NUMBER:       //是数
            push(atof(s)); //将该数压入到栈中
            break;
        case '+': //是运算符,则弹出所需数目的操作数，执行运算并将结果压入到栈中
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero didvisor\n");
            break;
        case '%':
            op2 = pop();
            if (op2 != 0.0)
                push(fmod(pop(), op2));
            else
                printf("error: zero didvisor\n");
            break;
        case '\n':                     //是换行符
            printf("\t%.8g\n", pop()); //弹出并打印栈顶的值
            break;
        default:
            printf("error: unknown command %s\n", s); //出错
            break;
        }
    }
    return 0;
}
/*----------------------栈----------------------*/
#define MAXVAL 100 /*栈val的最大深度*/

int sp = 0;         //下一个空闲位置
double val[MAXVAL]; //值栈

/*push函数：将f压入栈中*/
void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    }
    else
    {
        printf("error: stack full,can't push %g\n", f);
    }
}

/*pop函数：弹出并返回栈顶的数*/
double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/*getop函数：获取下一个运笲符或数值操作数*/
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.') //不是数
        return c;
    i = 0;
    if (isdigit(c)) //收集整数部分
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.') //收集小数部分
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFFSIZE 100

char buf[BUFFSIZE]; /*用于ungetch函数的缓冲区*/
int bufp = 0;       /*buf中下一个空闲位置*/

int getch(void) /*取一个字符，可能是压回的字符*/
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /*把字符c压回到输入中*/
{
    if (bufp >= BUFFSIZE)
        printf("error:ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}