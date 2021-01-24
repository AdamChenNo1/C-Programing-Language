/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 00:39:13
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 00:40:54
 * @FilePath: \C-Programing-Language\Example\Chapter-8\getchar_v2.c
 */
#include <stdio.h>
#include "syscalls.h"

/* getchar 函数：每次读入一组字符，但每次只输出一个字符*/
int getchar(void)
{
    static char buf[BUFSIZ];
    static char *bufp = buf;
    static int n = 0;
    if (n == 0)
    { /* 缓冲区为空*/
        n = read(0, buf, sizeof buf);
        bufp = buf;
        return (--n >= 0) ? (unsigned char)*bufp++ : EOF;
    }
}
