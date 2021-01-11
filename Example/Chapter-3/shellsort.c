/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 19:46:30
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 19:51:32
 * @FilePath: \C-Programing-Language\Example\Chapter-3\shellsort.c
 */
#include <stdio.h>
#define N 10
/* shellsort 函数：按递增顺序对v[O]...v[n-1] 进行排序*/
void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

int main()
{
    int a[N] = {1, 3, 5, 84, 23, 1, 2, 8, 7, 6};
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    shellsort(a, N);
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}