/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 20:57:10
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 21:04:20
 * @FilePath: \C-Programing-Language\Example\Chapter-8\error.c
 */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/*error函数:打印出错信息，然后终止，在调用时可带变长参数表。*/
void error(char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    fprintf(stderr, "error: ");
    vsprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);
    exit(1);
}