/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 03:26:36
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 03:41:44
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-9.c
 */
#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned x)
{
    int n = x == 0 ? 0 : 1;
    while (x &= x - 1)
    {
        n++;
    }
    return n;
}

int main()
{
    unsigned x = 12345;
    char s[100];
    printf("%u->%s has %d bits of 1.", x, itoa(x, s, 2), bitcount(x));
}