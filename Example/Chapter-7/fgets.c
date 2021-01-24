/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 23:06:32
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 23:12:21
 * @FilePath: \C-Programing-Language\Example\Chapter-7\fgets.c
 */
#include <stdio.h>

/* fgets 函数： 从iop指向的文件中最多读取n-1 个字符，再加上一个NULL*/
char *fgets(char *s, int n, FILE *iop)
{
    register int c;
    register char *cs;

    cs = s;
    while (--n > 0 && (c = getc(iop)) != EOF)
        if ((*cs++ = c) == '\n')
            break;
    *cs = '\0';
    return (c == EOF && cs == s) ? NULL : s;
}

/* fputs 函数：将字符串s 输出到iop 指向的文件中*/
int fputs(char *s, FILE *iop)
{
    int c;

    while (c = *s++)
        putc(c, iop);
    return ferror(iop) ? EOF : 1;
}