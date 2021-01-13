/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:50:48
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 18:51:29
 * @FilePath: \C-Programing-Language\Example\Chapter-4\atof.c
 */
#include <ctype.h>
/* atof 函数：把宁符串s转换为相应的双精度浮点数*/
double atof(char s[])
{
    double val, power;
    int i, sign;
    for (i = 0; isspace(s[i]); i++) /*跳过空白符*/
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}