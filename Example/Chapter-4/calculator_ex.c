/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-13 19:46:25
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 21:45:27
 * @FilePath: \C-Programing-Language\Example\Chapter-4\calculator_ex.c
 */
#include <stdio.h>
#include <stdlib.h> /*为了使用atof函数*/
#include <ctype.h>
#include "calc.h"

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
