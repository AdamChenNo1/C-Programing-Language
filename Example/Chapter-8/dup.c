/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 23:55:39
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 00:44:24
 * @FilePath: \C-Programing-Language\Example\Chapter-8\dup.c
 */
#include "syscalls.h"
#include <stdio.h>

int main() /* 将输入复制到输出*/
{
    char buf[BUFSIZ];
    int n;
    while ((n = read(0, buf, BUFSIZ)) > 0)
        write(1, buf, n);
    return 0;
}