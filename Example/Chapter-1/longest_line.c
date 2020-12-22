/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 21:37:08
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-20 21:54:26
 * @FilePath: \C-Programing-Language\Example\Chapter-1\longest_line.c
 */
/*
*读入一组文本行，并打印最长的文本行
*/

#include <stdio.h>
#define MAXLINE 1000

/*读取输入的下一行，并返回该行的长度，在读到文件末尾时，返回0*/
int getline(char line[], int maxline);
/*复制字符数组*/
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int len;               /*当前行的长度*/
    int max;               /*目前为止最大行的长度*/
    char line[MAXLINE];    /*当前输入行*/
    char longest[MAXLINE]; /*已保存的最长行*/
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /*有输入*/
    {
        printf("%s", longest);
    }
    return 0;
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

void copy(char to[], char from[]) /*假设to足够大*/
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
