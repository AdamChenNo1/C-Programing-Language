/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 19:09:37
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 19:22:25
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Character_frequency.c
 */
/*
*统计各个数字、空白符（包括制表符、换行符以及空格符）以及
其他所有字符出现的次数
*/

#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' || c <= '9')
            ndigit[c - '0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else
            nother++;
    }
    printf("digits = ");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }
    printf(",white space = %d,other = %d\n", nwhite, nother);
}