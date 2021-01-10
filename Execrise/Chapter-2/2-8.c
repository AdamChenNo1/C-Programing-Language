/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 02:56:09
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 03:20:17
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-8.c
 */
#include <stdio.h>
#include <stdlib.h>

/*函数rightrot (x, n) ，该函数返回将x循环右移（即从最右端移出的位将从最左端移入n （二进制）位后所得到的值*/
unsigned rightrot(unsigned x, int n)
{
    int len = sizeof(unsigned) * 8;
    unsigned max = 1 << (len - 1);
    for (int i = 0; i < n; i++)
    {
        int s = x % 2;
        x = (x >> 1) + s * max;
    }
    return x;
}

int main()
{
    unsigned x = 255;
    char s[100];
    int n = 3;
    printf("x:%u->%s\n", x, itoa(x, s, 2));
    unsigned y = rightrot(x, n);
    printf("x:%u->%s\n", y, itoa(y, s, 2));
}