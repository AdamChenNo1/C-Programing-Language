/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 19:54:09
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 20:26:11
 * @FilePath: \C-Programing-Language\Example\Chapter-2\atoi.c
 */
/* atoi 函数：将字符串s 转换为相应的整型数*/
#include <stdio.h>

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int main()
{
    char s[] = "123";
    int v = atoi(s);
    printf("%s\n", s);

    printf("%s -> %d", s, v);
}