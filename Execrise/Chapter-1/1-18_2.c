/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-20 21:37:08
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-21 01:13:59
 * @FilePath: \C-Programing-Language\Execrise\Chapter-1\1-18_2.c
 */
/*
*读入一组文本行，删除每行末尾的空格及制表符，并删除空格行
*/

#include <stdio.h>
#define MAXLINE 100000

/*读取输入的下一行，并返回该行的长度，在读到文件末尾时，返回0*/
int getline(char line[], int maxline);
/*去除字符数组末尾的空格及制表符*/
int remove_tail(char original[], char result[]);

int main(int argc, char const *argv[])
{
    char line[MAXLINE];    /*当前输入行*/
    char newline[MAXLINE]; /*已去除尾部空格和制表符的输入行*/
    while (1)
    {
        getline(line, MAXLINE);
        remove_tail(line, newline);
        printf("%s", newline);
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
int remove_tail(char original[], char result[])
{
    int c1, c2, i, len = 0;
    c1 = c2 = 0;
    if (original[0] = '\0')
    {
        result[0] = original[0];
        return 0;
    }
    while (original[c2] != '\n')
    {
        while (original[c2] != ' ' && original[c2] != '\t')
        {
            result[len++] = original[c2++];
        }
        c1 = c2;
        while (original[c2] == ' ' || original[c2] == '\t')
        {
            c2++;
        }
        if (original[c2] != '\n')
        {
            while (len < c2)
            {
                result[len] = original[len];
                len++;
            }
        }
        else
        {
            result[len] = original[c2];
            result[++len] = '\0';
        }
    }
}
