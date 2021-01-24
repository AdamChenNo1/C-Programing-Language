/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-23 02:05:32
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-23 02:06:43
 * @FilePath: \C-Programing-Language\Example\Chapter-7\lower.c
 */
#include <stdio.h>
#include <ctype.h>
int main() /*lower 函数：将输人转换为小写形式 */
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(tolower(c));
    return 0;
}