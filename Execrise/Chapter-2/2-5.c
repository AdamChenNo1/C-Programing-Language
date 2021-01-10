/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 22:37:43
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 22:48:57
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-5.c
 */
#include <stdio.h>
/*any(sl,s2) ，将字符串s2 中的任一字符在字符串s1中第一次出现的位置作为结果返回。如果s1 中不包含s2 中的字符，则返回－1 。*/

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    char s1[] = "ahjshfkasjdklsfj";
    char *s2[2] = {"123456s", "123456"};
    for (int i = 0; i < 2; i++)
        printf("any(s1,s2[%d]) = %d\n", i, any(s1, s2[i]));
}