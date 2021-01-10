/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 22:49:49
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 02:54:57
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-7.c
 */

#include <stdio.h>
#include <stdlib.h>

unsigned invert(unsigned x, int p, int n)
{
    unsigned _001_ = ~(~0 << (p - n + 1));
    unsigned _100_ = ~0 << (p + 1);
    unsigned _010_ = ~_100_ - _001_;

    unsigned a = x & _100_;
    unsigned y = x & _010_;
    unsigned b = x & _001_;

    unsigned y_ = ~y & _010_;
    return a + y_ + b;
}

int main()
{
    unsigned x = 255;
    int p = 5, n = 4;
    char s[100];
    printf("x:%u->%s\n", x, itoa(x, s, 2));
    unsigned x_ = invert(x, p, n);
    printf("x_:%u->%s\n", x_, itoa(x_, s, 2));
}