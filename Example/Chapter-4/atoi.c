/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-13 18:37:18
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 18:42:10
 * @FilePath: \C-Programing-Language\Example\Chapter-4\atoi.c
 */
#include <stdio.h>
int atoi(char s[])
{
    double atof(char s[]);

    return (int)atof(s);
}

int main(int argc, char const *argv[])
{
    char s[] = "-457.5485";
    printf("%s->%d", s, atoi(s));
    return 0;
}
