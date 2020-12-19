/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 00:29:25
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-20 00:38:40
 * @FilePath: \C-Programing-Language\Example\Chapter-1\Power_base_n.c
 */
/*
*计算整数m的n次幂,原始C版本
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int power();
    printf("i 2^i (-3)^i\n");
    for (int i = 0; i < 10; ++i)
        printf("%d %-4d %-3d\n", i, power(2, i), power(-3, i));
    return 0;
}

power(base, n) int base, n;
{
    int i, p;
    p = 1;
    for (i = 1; i < n; i++)
    {
        p = p * base;
    }
    return p;
}
