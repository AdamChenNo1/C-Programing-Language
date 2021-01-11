/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 19:10:47
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 19:20:49
 * @FilePath: \C-Programing-Language\Example\Chapter-3\trim.c
 */
#include <stdio.h>
#include <string.h>
/* trim 函数：删除字符串尾部的空格符、制表符与换行符*/
int trim(char s[])
{
    int n;
    for (n = strlen(s) - 1; n >= 0; n--)
    {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    }
    s[n + 1] = '\0';
    return n;
}

int main()
{
    char s[] = "fsd54f 5fdg4 fdh  ghf  ";
    printf("%s:length:%d->", s, strlen(s));
    int n = trim(s);
    printf("%s::length:%d\n", s, n);
}