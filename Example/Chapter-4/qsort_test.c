/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-14 19:02:41
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-14 19:24:23
 * @FilePath: \C-Programing-Language\Example\Chapter-4\qsort_test.c
 */
#include <stdio.h>
#define N 10

int main()
{
    int v[N] = {1, 7, 8, 9, 5, 6, 2, 3, 4};
    void qsort(int[], int, int);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    qsort(v, 0, N - 1);
    printf("\n-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}