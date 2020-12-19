/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 20:55:02
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-19 23:38:39
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-14_1.c
 */
/*
*打印输入中单词长度的水平直方图。
*/

#include <stdio.h>
#include <limits.h>

#define CHAR_KINDS 128

int main()
{
    int c;
    int cf[CHAR_KINDS] = {0};
    while ((c = getchar()) != EOF)
    {
        cf[c]++;
    }

    printf("Horizontal histogram of character frequency\n");
    for (int i = 0; i < CHAR_KINDS; i++)
    {
        int f;
        if ((f = cf[i]) != 0)
        {
            if (i <= 32 || i == 127)
            {
                printf("%#4x", i);
            }
            else
            {
                printf("% 4c", i);
            }
            for (int j = 0; j < f; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }
    return 0;
}
