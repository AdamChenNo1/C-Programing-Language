/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 01:19:16
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 01:21:03
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Count_characters.c
 */
/*
*对字符进行计数
*/
#include <stdio.h>

int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}