/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 17:54:03
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 17:59:17
 * @FilePath: \C-Programing-Language\Example\Chapter-7\calc.c
 */
#include <stdio.h>

/*简单计算器:计算输入的数字之和*/
int main(int argc, char const *argv[])
{
    double sum, v;

    sum = 0;
    while (scanf("%lf", &v) == 1)
        printf("\t%.2f\n%", sum += v);
    return 0;
}
