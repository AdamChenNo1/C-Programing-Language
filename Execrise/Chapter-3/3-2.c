/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-11 21:02:45
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-11 21:41:59
 * @FilePath: \C-Programing-Language\Execrise\Chapter-3\3-2.c
 */
#include <stdio.h>

/*函数escape(s,t):将字符串t复制到字符串s中，并在复制过程中将换行符、制表符等不可见字符分别转换为\n 、\t等相应的可见的转义字符序列*/
void escape(char s[], char t[])
{
    int i, j, c;
    for (i = 0, j = 0; (c = t[i]) != '\0'; i++)
    {
        switch (c)
        {
        case ' ':
            s[j++] = '\\';
            s[j++] = '0';
            break;
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = c;
            break;
        }
    }
    s[j] = '\0';
}

void accept(char s[], char t[])
{
}
int main()
{
    char t[] = "sgfdg fg    fg "
               "";
    printf("%s\n", t);
    char s[100];
    escape(s, t);
    printf("%s\n", s);
}