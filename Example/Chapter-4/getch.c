/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-13 21:30:14
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 21:35:29
 * @FilePath: \C-Programing-Language\Example\Chapter-4\getch.c
 */
#include <stdio.h>

#define BUFFSIZE 100

char buf[BUFFSIZE]; /*用于ungetch函数的缓冲区*/
int bufp = 0;       /*buf中下一个空闲位置*/

int getch(void) /*取一个字符，可能是压回的字符*/
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /*把字符c压回到输入中*/
{
    if (bufp >= BUFFSIZE)
        printf("error:ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}