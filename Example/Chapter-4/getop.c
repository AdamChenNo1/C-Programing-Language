/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-22 21:06:21
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 21:12:14
 * @FilePath: \C-Programing-Language\Example\Chapter-4\getop.c
 */
#include <stdio.h>
#include <ctype.h>
#include "calc.h"
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