/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 18:01:35
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 18:04:01
 * @FilePath: \C-Programing-Language\Example\Chapter-2\lower.c
 */
#include <stdio.h>

/*lower函数：把字符c转换为小写形式；只对ASCII字符集有效*/
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{
    char s[] = "1CAS2FD34FDS";
    printf("%s->", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = lower(s[i]);
    }
    printf("%s\n", s);
}