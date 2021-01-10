/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 22:50:59
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 02:39:53
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-6.c
 */
#include <stdio.h>
#include <stdlib.h>
/*setbits(x,p,n,y) ，该函数返回对x执行下列操作后的结果值：
    将x 中从第p 位开始的n个（二进制）位设置为y 中最右边n位的值，x的其余各位保持不变。*/

void printBin(unsigned x)
{
    char s[100];
    printf("%s\n", itoa(x, s, 2));
}

unsigned setbits(unsigned x, int p, int n, int y)
{
    unsigned lowest_n_1 = ~(~0 << n); //低0~n-1位为1，其余全为0
    printf("lowest_n_1:");
    printBin(lowest_n_1);
    unsigned y_low = y & lowest_n_1; //低0~n-1位为y中对应位，其余位为0
    printf("y_low:");
    printBin(y_low);
    unsigned y_mid_by_0 = y_low << (p - n + 1); //从右边数起第p位开始向右数的n位为y的低0~n位,其余位全0的数
    printf("y_mid_by_0:");
    printBin(y_mid_by_0);
    unsigned lowest_p_0 = ~0 << p + 1; //低0~p位为0,其余位全为1的数
    printf("lowest_p_0:");
    printBin(lowest_p_0);
    unsigned lowest_1 = ~(~0 << (p - n + 1));          //低0~p-n+1位全为1，其余位全为0
    unsigned y_mid_by_0_and_1 = y_mid_by_0 + lowest_1; //从右边数起第p位开始向右数的n位为y的低0~n位,更高位全0，更低位全1的数
    printf("y_mid_by_0_and_1:");
    printBin(y_mid_by_0_and_1);
    unsigned y_mid_by_1 = y_mid_by_0_and_1 + lowest_p_0; //从右边数起第p位开始向右数的n位为y的低0~n位,其余位全1的数
    printf("y_mid_by_1:");
    printBin(y_mid_by_1);

    return y_mid_by_0 | (x & y_mid_by_1);
}

int main()
{
    unsigned x = 1023;
    int p = 7, n = 4, y = 20;
    char s[100];
    printf("x:%u:%s\n", x, itoa(x, s, 2));
    printf("%u:%s\n", y, itoa(y, s, 2));
    unsigned nx = setbits(x, p, n, y);
    printf("%u:%s\n", nx, itoa(nx, s, 2));
}
