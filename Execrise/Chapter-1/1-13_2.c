/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 20:55:02
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-19 23:05:59
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-13_2.c
 */
/*
*打印输入中单词长度的竖直直方图。
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int c, d;
    int nw;
    int wl[100] = {0};
    nw = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            d = c;
            wl[++nw] = 0;
            while (d != EOF && d != ' ' && d != '\t' && d != '\n')
            {
                wl[nw - 1]++;
                d = getchar();
            }
        }
    }

    int max = wl[0];
    for (int k = 0; k < nw; k++)
    {
        if (wl[k] > max)
            max = wl[k];
    }

    printf("Vertical histogram of words length\n");
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < nw; j++)
        {
            // printf("% d", i);
            if (wl[j] >= max - i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
