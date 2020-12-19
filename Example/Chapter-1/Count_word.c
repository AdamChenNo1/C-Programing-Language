/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 03:13:19
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 03:34:10
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\Count_word.c
 */
/*统计输入中的行数、单词数和符号数*/

#include <stdio.h>

#define IN 1  //inside a word
#define OUT 0 //outside a word

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state = OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("Count of lines:%d | words:%d | characters:%d\n");
}
