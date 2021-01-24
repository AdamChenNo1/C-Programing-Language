/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-22 20:05:41
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 20:46:04
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-2_test.c
 */
#include <stdio.h>

int main()
{
    double Atof(char[]);
    char s[] = "12345.67e-8";
    printf("%s->%10.10f", s, Atof(s));
}