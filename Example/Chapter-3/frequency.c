/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 20:11:05
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 20:17:34
 * @FilePath: \C-Programing-Language\Example\Chapter-3\frequency.c
 */
#include <stdio.h>
int main()
{
    int c, i, nwhite, nother, ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
        switch (c)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            ndigit[c - '0']++;
            break;
        case ' ':
        case '\n':
        case '\t':
            nwhite++;
            break;
        default:
            nother++;
            break;
        }
    printf("digits =");
    for (i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space= %d， other= %d\n", nwhite, nother);
    return 0;
} /* 统计数字、空白符及其他字符*/
