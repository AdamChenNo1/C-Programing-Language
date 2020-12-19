/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:05:59
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 00:17:06
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\temperature_transform.c
 */
/*使用公式C=(5/9)*(F-32)打印华氏温度与摄氏温度转换表*/
#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /*温度表的下限*/
    upper = 300; /*温度表的上限*/
    step = 20;   /*间隔*/

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}