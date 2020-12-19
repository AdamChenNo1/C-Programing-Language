/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:05:59
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 00:34:07
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-4.c
 */
/*
*使用公式F=(9/5)*C+32打印摄氏温度与华氏温度转换表
*使用浮点数运算和打印，并且使结果右对齐
*在顶部打印标题
*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*温度表的下限*/
    upper = 300; /*温度表的上限*/
    step = 20;   /*间隔*/
    printf("Celsius-Fahrenheit Table\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}