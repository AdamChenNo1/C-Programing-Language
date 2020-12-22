/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 21:37:08
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-20 23:30:18
 * @FilePath: \C-Programing-Language\Execrise\Chapter-1\1-17.c
 */
/*
*读入一组文本行，并打印长度超过80的行
*/

#include <stdio.h>
#include <limits.h>
#define MAXLINE 100000

/*读取输入的下一行，并返回该行的长度，在读到文件末尾时，返回0*/
int getline(char line[], int maxline);
/*复制字符数组*/
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int max;            /*待打印行的最小长度*/
    char line[MAXLINE]; /*当前输入行*/
    max = 80;
    while (1)
    {
        if (getline(line, MAXLINE) > max)
        {
            printf("%s", line);
            // copy(longest, line);
            // printf("%s", longest);
        }
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i, j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        if (i < lim - 1) /*i大于lim-1时仅计数，而不保存字符*/
            s[j++] = c;
    }
    if (c == '\n')
    {
        if (i < lim - 1)
        {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';
    return i;
}

void copy(char to[], char from[]) /*假设to足够大*/
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
