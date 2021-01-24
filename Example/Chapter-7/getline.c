/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 23:13:38
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 23:15:59
 * @FilePath: \C-Programing-Language\Example\Chapter-7\getline.c
 */
#include <stdio.h>
#include <string.h>

/* getline 函数：读入一个输入行，并返回其长度*/
int getline(char *line, int max)
{
    if (fgets(line, max, stdin) == NULL)
        return 0;
    else
        return strlen(line);
}