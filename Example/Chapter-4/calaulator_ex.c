/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-13 19:46:25
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 20:56:38
 * @FilePath: \C-Programing-Language\Example\Chapter-4\calaulator_ex.c
 */
#include <stdio.h>
#include <stdlib.h> /*为了使用atof函数*/
#include <ctype.h>

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

    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
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
        case '\n':
            printf("\t%.8g%n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
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