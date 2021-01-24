/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 00:29:18
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 00:45:33
 * @FilePath: \C-Programing-Language\Example\Chapter-8\getchar_v2_test.c
 */
#include <stdio.h>
#undef getchar

int main()
{
    int getchar(void);
    putchar(getchar());
}