/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:45:38
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 00:58:31
 * @FilePath: \C_C++\C Programing Language\Example\Chapter-1\echo_pithy.c
 */
/*
*将输入一次一个字符地复制到输出
*更精练的版本
*/

#include <stdio.h>
int main()
{
    int c;                         //之所以不把c声明为char型，是为了让其足够大到足以存放getchar函数返回的任何值，包括存储文件结束符EOF
    while ((c = getchar()) != EOF) /*while 该字符不是文件结束指示符*/
        putchar(c);                /*输出刚读入的字符*/
}
