/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 18:28:44
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 20:20:16
 * @FilePath: \C-Programing-Language\Example\Chapter-3\binsearch.c
 */
#include <stdio.h>
#define N 14
/* binsearch 函数：在v[0]<=v[1]<=v[2]<=...<=v[n-1]中杳找x */

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* 找到了匹配的值*/
            return mid;
    }
    return -1; /* 没有匹配的值*/
}

int main()
{
    int v[N] = {1,
                2,
                3,
                5,
                42,
                31,
                4,
                563,
                87,
                78,
                321,
                3,
                78,
                3};
    int x = 3;
    for (int i = 0; i < 14; i++)
        printf("%d ", v[i]);
    printf("\n");
    int n = binsearch(x, v, N);
    printf("%d is at index of %d", x, n);
}
