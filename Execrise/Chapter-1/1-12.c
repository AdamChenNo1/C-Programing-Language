/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 03:13:19
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 03:44:28
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-12.c
 */
/*以每行一个单词的形式打印输入*/

#include <stdio.h>

#define IN 1  //inside a word
#define OUT 0 //outside a word

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            putchar('\n');
        }
        else
        {
            state = IN;
        }
        if (state == IN)
        {
            putchar(c);
        }
    }
}
