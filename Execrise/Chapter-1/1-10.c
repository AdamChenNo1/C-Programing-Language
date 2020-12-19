/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:45:38
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 03:11:47
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-10.c
 */
/*
*将输入复制到输出，并将其中的制表符和回退符替换为可见的符号。
*/

#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            putchar('\\');
            putchar('t');
        case '\b':
            putchar('\\');
            putchar('b');
        default:
            putchar(c);
        }
    }
}
