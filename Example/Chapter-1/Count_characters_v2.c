/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 01:19:16
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 01:23:58
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Count_characters_v2.c
 */
/*
*对字符进行计数
*/
#include <stdio.h>

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc); /*强制不打印小数部分*/
}