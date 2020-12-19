/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 01:19:16
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 01:27:08
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Count_lines.c
 */
/*
*对输入行进行计数
*/
#include <stdio.h>

int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl); /*强制不打印小数部分*/
}