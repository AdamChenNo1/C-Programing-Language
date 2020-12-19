/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 00:00:18
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-20 00:18:13
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-15.c
 */

/*
*使用公式C=(5/9)*(F-32)打印华氏温度与摄氏温度转换表
*使用公式F=(9/5)*C+32打印摄氏温度与华氏温度转换表
*使用浮点数运算和打印，并且使结果右对齐
*使用函数
*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    void F_2_C(float, float, float);
    void C_2_F(float, float, float);
    lower = 0;   /*温度表的下限*/
    upper = 300; /*温度表的上限*/
    step = 20;   /*间隔*/
    F_2_C(lower, upper, step);
    C_2_F(lower, upper, step);
}

void F_2_C(float lower, float upper, float step)
{
    float fahr = lower;
    float celsius;
    printf("fahr   celsius\n");
    while (fahr <= upper)
    {

        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f   %-6.1f\n", fahr, celsius);
        fahr += step;
    }
}

void C_2_F(float lower, float upper, float step)
{
    float celsius = lower;
    float fahr;

    printf("celsius  fahr\n");

    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%4.0f     %4.1f\n", celsius, fahr);
        celsius += step;
    }
}