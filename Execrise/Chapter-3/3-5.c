/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 23:37:38
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 00:08:28
 * @FilePath: \C-Programing-Language\Execrise\Chapter-3\3-5.c
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 2

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
函数itob(n,s,b) ，将整数n转换为以b为底的数，并将转换结果以字符的形式保存到字符串s中。
例如，itob(n,s,16) 把整数n格式化成十六进制整数保存在s中。
*/

void itob(int n, char s[], int b)
{
    int digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    int i = 0, sign = n, c;
    do
    {
        c = n % b;
        c = (c > 0) ? c : -c;
        s[i++] = digit[c];
    } while ((n /= b) != 0);
    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main()
{
    int x[N] = {-156, -pow(2, 8 * sizeof(int) - 1)};
    int b = 16;
    char s[100];
    for (int i = 0; i < N; i++)
    {
        itob(x[i], s, b);
        printf("x=%d->%s(base %d)\n", x[i], s, b);
    }
}