/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 03:22:41
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 03:26:17
 * @FilePath: \C-Programing-Language\Example\Chapter-2\bitcount.c
 */
#include <stdio.h>
#include <stdlib.h>

/* bitcount 函数：统计x中值为1的二进制位数*/
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}

int main()
{
    unsigned x = 101;
    char s[100];
    printf("x:%u->%s has %d bits of 1.", x, itoa(x, s, 2), bitcount(x));
}