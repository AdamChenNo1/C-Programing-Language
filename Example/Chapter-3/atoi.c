/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 19:43:40
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 19:44:21
 * @FilePath: \C-Programing-Language\Example\Chapter-3\atoi.c
 */

#include <ctype.h>
/*atoi 函数：将s转换为整型数*/
int atoi(char s[])
{
    int i, n, sign;
    for (i = 0; isspace(s[i]); i++)
        sign = (s[i] == '-') ? -1 : 1;
    /* 跳过空白符*/
    if (s[i] == '+' || s[i] == '-') /* 跳过符号*/
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}