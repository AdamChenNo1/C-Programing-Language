/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 21:52:52
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 21:53:58
 * @FilePath: \C-Programing-Language\Example\Chapter-7\filecopy.c
 */
#include <stdio.h>

/*filecopy函数：将文件ifp复制到文件ofp*/
void filecopy(FILE *ifp, FILE *ofp)
{
    int c;

    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);
}