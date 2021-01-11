/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 00:12:13
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 00:25:06
 * @FilePath: \C-Programing-Language\Execrise\Chapter-3\3-6.C
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/*
itoa 函数：将数字n转换为字符串井保存到s 中
修正了最大的负数，即n等于-(2^{字长-1})的情况的处理。在任何机器上运行时都能打印出正确的值。
第三个参数为最小字段宽度。为了保证转换后所得的结果至少具有第三个参数指定的最小宽度，必要时在所得结果的左边填充一定的空格。
*/
void itoa_mine(int n, char s[], int w)
{
    int i = 0;
    unsigned m = (unsigned)n;
    do
    {                          /* 以反序生成数字*/
        s[i++] = m % 10 + '0'; /* 取下一个数字*/
    } while ((m /= 10) > 0);   /* 删除该数字*/
    if (n < 0)
        s[i++] = '-';
    for (; i < w; i++)
        s[i] = ' ';
    s[i] = '\0';
    reverse(s);
}

int main()
{
    int width = 15;
    int n = 123456;
    char s1[100], s2[100];
    itoa_mine(n, s1, width);
    printf("n:%d->%s\n", n, s1);

    int bytes = sizeof(int);
    int min = -(int)pow(2, (8 * bytes - 1));
    itoa_mine(min, s2, width);
    printf("min:%d->%s,bytes = %d\n", min, s2, bytes);
    int v = -16 / 10;
    int c = v + '0';
    printf("%d:%c", v, c);
}
