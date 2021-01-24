/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 16:32:12
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-15 16:36:20
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-14_test.c
 */
#include <stdio.h>
#include "4-14.h"

int main()
{
    int x = 1, y = 2;
    printf("x = %d,y=%d->", x, y);
    swap(int, x, y);
    printf("x = %d,y=%d\n", x, y);
}