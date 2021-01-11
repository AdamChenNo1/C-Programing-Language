/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 20:20:31
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 20:45:13
 * @FilePath: \C-Programing-Language\Execrise\Chapter-3\3-1.c
 */
#include <stdio.h>
#define N 10
/* binsearch 函数：在v[0]<=v[1]<=v[2]<=...<=v[n-1]中杳找x */
int binsearch(int v[], int x, int n)
{
    int low = 0, high = n - 1, mid = -1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (x <= v[mid])
            high = mid;
        else
            low = mid + 1;
    }
    return v[low] == x ? low : -1;
}

int main()
{
    int x = 11;
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("%d is at index of %d\n", x, binsearch(a, x, N));
}