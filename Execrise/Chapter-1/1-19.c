/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-22 17:27:56
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-22 18:25:38
 * @FilePath: \C_C++\C-Programing-Language\Execrise\Chapter-1\1-19.c
 */
/*
颠倒每个输入行中的字符顺序
*/

#include <stdio.h>
#define MAX 100000
int main(int argc, char const *argv[])
{
    void reverse(char s[]);
    int getline(char s[], int lim);
    char s[MAX];
    while (1)
    {
        getline(s, MAX);
        reverse(s);
        printf("%s", s);
    }
    return 0;
}
void reverse(char s[])
{
    int i, j;
    i = j = 0;
    char a;
    while (s[i] != '\n')
        i++;
    i--;
    while (i >= j)
    {
        a = s[i];
        s[i] = s[j];
        s[j] = a;
        i--;
        j++;
    }
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
