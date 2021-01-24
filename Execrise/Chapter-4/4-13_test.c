/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 18:16:20
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-15 18:21:41
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-13_test.c
 */
#include <stdio.h>

int main()
{
    char s[] = "asd";
    void reverse(char[]);
    printf("%s->", s);
    reverse(s);
    printf("%s\n", s);
}