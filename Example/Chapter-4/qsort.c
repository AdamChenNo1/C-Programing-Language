/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-14 18:51:52
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-14 19:16:24
 * @FilePath: \C-Programing-Language\Example\Chapter-4\qsort.c
 */
/* qsort 函数：以递增顺序对V[left] ·· ·v[right] 进行排序*/
void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right) //若数组包含的元素少于2个，则不执行任何操作
        return;
    swap(v, left, (left + right) / 2); //将划分子集的元素移动到v[left]
    last = left;
    for (i = left + 1; i <= right; i++) //划分子集
    {
        if (v[i] < v[left])
            swap(v, ++last, i);
    }
    swap(v, left, last); //恢复划分子集的元素
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(int v[], int i, int j)
{
    int t = v[i];
    v[i] = v[j], v[j] = t;
}