/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 18:04:25
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 18:08:06
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-10.c
 */
#include <stdio.h>
/*重新编写将大写字母转换为小写字母的函数lower, 并用条件表达式替代其中的if-else结构。*/

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}

int main()
{
    char s[] = "1A12FF1DSG2sf1s31fg";
    printf("%s->", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = lower(s[i]);
    }
    printf("%s\n", s);
}