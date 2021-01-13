/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:23:11
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 18:57:58
 * @FilePath: \C-Programing-Language\Example\Chapter-4\atof_test.c
 */
#include <stdio.h>
#define N 100
#define M 2
#include "chapter-4.h"

int main()
{
    char s[M][N] = {
        "-10.5",
        "125468.00001"};
    for (int i = 0; i < M; i++)
    {
        printf("%s->%f\n", s[i], atof(s[i]));
    }
}