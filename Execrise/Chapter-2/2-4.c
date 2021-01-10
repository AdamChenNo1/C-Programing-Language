/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 21:19:24
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 22:34:45
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-4.c
 */
/*将字符串s1中任何与字符串s2中字符匹配的字符都删除*/
#include <stdio.h>
#define MATCH 1
#define UNMATCH 0

void squeeze(char s1[], char s2[])
{
    int i, j, k = 0, state = UNMATCH;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                state = MATCH;
                break;
            }
        }
        if (state == MATCH)
        {
            state = UNMATCH;
            continue;
        }
        s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main()
{
    char s1[] = "asdfghjjklasdgfdhgf";
    char s2[] = "asdgfdhgf";
    printf("%s-%s=", s1, s2);
    squeeze(s1, s2);
    printf("%s\n", s1);
}