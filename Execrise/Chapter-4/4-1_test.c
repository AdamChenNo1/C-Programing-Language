/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 15:33:29
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-15 15:40:27
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-1_test.c
 */
#include <stdio.h>

int main()
{
    char s[] = "123asd123asdf456";
    char t[] = "asd";
    int strrindex(char[], char[]);
    printf("The last time \"%s\" appears in \"%s\" begins at index of %d\n", t, s, strrindex(s, t));
}
