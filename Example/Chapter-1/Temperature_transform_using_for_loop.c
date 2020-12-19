/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:05:59
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 00:36:58
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Temperature_transform_using_for_loop.c
 */
/*
*使用公式C=(5/9)*(F-32)打印华氏温度与摄氏温度转换表
*使用浮点数运算和打印，并且使结果右对齐
*使用for循环
*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*温度表的下限*/
    upper = 300; /*温度表的上限*/
    step = 20;   /*间隔*/

    for (fahr = lower; fahr <= upper; fahr += step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}