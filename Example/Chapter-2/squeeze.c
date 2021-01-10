/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 20:31:25
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 20:35:57
 * @FilePath: \C-Programing-Language\Example\Chapter-2\squeeze.c
 */

#include <stdio.h>
/*删除字符串s 中出现的所有字符c*/
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main()
{
    char s[] = "abcdgfasfdgds";
    int c = 'a';
    printf("%s->", s);
    squeeze(s, c);
    printf("%s\n", s);
}