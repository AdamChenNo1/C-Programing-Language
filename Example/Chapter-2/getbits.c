/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 22:53:04
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 23:11:45
 * @FilePath: \C-Programing-Language\Example\Chapter-2\getbits.c
 */
#include <stdio.h>
#include <stdlib.h>

/*getbits 函数：返回x中从右边数第p位开始向右数n位。假定最右边的一位是第0 位， n 与p 都是合理的正值*/
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

int main()
{
    unsigned x = 135;
    int p = 7, n = 5;
    char s[100];
    printf("%u = %s\n", x, itoa(x, s, 2));
    unsigned xx = getbits(x, p, n);
    itoa(xx, s, 2);
    printf("%d -> %d = %u:%s", p, n, xx, s);
}