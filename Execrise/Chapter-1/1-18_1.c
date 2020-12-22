/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 21:37:08
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-21 00:19:39
 * @FilePath: \C-Programing-Language\Execrise\Chapter-1\1-18_1.c
 */
/*
*读入一组文本行，删除每行末尾的空格及制表符，并删除空格行
*/

#include <stdio.h>
#define MAXLINE 100000

/*去除字符数组末尾的空格及制表符*/
void printline_without_tail()
{
    int c1, c2, i, buffer[MAXLINE];
    c1 = c2 = getchar();
    while (c2 != '\n')
    {
        while (c2 != ' ' && c2 != '\t')
        {
            putchar(c2);
            c2 = getchar();
        }
        c1 = c2;
        i = 0;
        while (c2 == ' ' || c2 == '\t')
        {
            buffer[i++] = c2;
            c2 = getchar();
        }
        if (c2 != '\n')
        {
            for (int j = 0; j < i; j++)
                putchar(buffer[j]);
        }
        else
        {
            putchar(c2);
        }
    }
}
int main(int argc, char const *argv[])
{
    while (1)
    {
        printline_without_tail();
    }
    return 0;
}