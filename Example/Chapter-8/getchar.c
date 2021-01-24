/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 00:14:41
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 00:44:39
 * @FilePath: \C-Programing-Language\Example\Chapter-8\getchar.c
 */
#include "syscalls.h"
#include <stdio.h>
/* getchar 函数：无缓冲的单字符输人*/
int getchar(void)
{
    char c;
    return (read(0, &c, 1) == 1) ? (unsigned char)c : EOF;
}