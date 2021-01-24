/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-23 02:11:42
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-23 02:27:30
 * @FilePath: \C-Programing-Language\Execrise\Chapter-7\7-1.c
 */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int c;
    for (int i = 0; (c = argv[0][i]) != '\0'; i++)

        putchar(tolower(c));
    return 0;
}
