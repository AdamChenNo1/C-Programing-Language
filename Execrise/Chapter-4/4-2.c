/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 15:47:30
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 20:44:19
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-2.c
 */
#include <ctype.h>
#include <math.h>
/* 
atof 函数：把宁符串s转换为相应的双精度浮点数
新增：对浮点数科学表示法的处理
*/
double Atof(char s[])
{
    double val, power, exp;
    int i, sign, signe;
    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10 * val + (s[i] - '0');
    if (s[i] == '.')
    {
        i++;
        for (power = 1.0; isdigit(s[i]); i++)
        {
            val = 10 * val + (s[i] - '0');
            power *= 10.0;
        }
        val /= power;
    }
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        signe = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i++;
        for (power = 0.0; isdigit(s[i]); i++)
            power = 10 * power + (s[i] - '0');
    }
    exp = pow(10, power);
    return signe == -1 ? val / exp : val * exp;
}