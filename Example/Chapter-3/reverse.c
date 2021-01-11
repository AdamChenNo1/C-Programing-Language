/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 19:58:10
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 20:02:03
 * @FilePath: \C-Programing-Language\Example\Chapter-3\reverse.c
 */
#include <stdio.h>
#include <string.h>
/* reverse 函数：倒置字符串s 中各个字符的位置*/
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main()
{
    char s[] = "sfdsafdg ";
    printf("before:%s\n", s);
    reverse(s);
    printf("after:%s\n", s);
}