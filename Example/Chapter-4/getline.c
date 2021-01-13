/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:49:51
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 17:54:50
 * @FilePath: \C-Programing-Language\Example\Chapter-4\getline.c
 */
#include <stdio.h>
/*getline函数：将行保存到s中，并返回该行的长度*/
int getline(char s[], int lim)
{
    int c, i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}