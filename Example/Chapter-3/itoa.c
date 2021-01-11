/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 19:26:41
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 23:24:11
 * @FilePath: \C-Programing-Language\Example\Chapter-3\itoa.c
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

/*itoa 函数：将数字n转换为字符串井保存到s 中*/
void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0) /* 记录符号 */
        n = -n;         /* 使n成为正数*/
    i = 0;
    do
    {                          /* 以反序生成数字*/
        s[i++] = n % 10 + '0'; /* 取下一个数字*/
    } while ((n /= 10) > 0);   /* 删除该数字*/
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main()
{
    int n = 123456;
    char s1[100], s2[100];
    itoa(n, s1);
    printf("n:%d->%s\n", n, s1);

    int bytes = sizeof(int);
    int min = -(int)pow(2, (8 * bytes - 1));
    itoa(min, s2);
    printf("min:%d->%s,bytes = %d\n", min, s2, bytes);
    int v = -16 / 10;
    int c = v + '0';
    printf("%d:%c", v, c);
}