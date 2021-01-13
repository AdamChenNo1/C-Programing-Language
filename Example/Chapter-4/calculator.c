/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:47:17
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 17:58:50
 * @FilePath: \C-Programing-Language\Example\Chapter-4\calculator.c
 */
#include <stdio.h>
#include "chapter-4.h"
#define MAXLINE 100
/* 简单计算器程序*/
int main()
{
    double sum, atof(char[]);
    char line[MAXLINE];
    int getline(char line[], int max);
    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
