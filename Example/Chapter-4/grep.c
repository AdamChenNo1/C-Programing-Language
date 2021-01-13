/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:00:17
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 19:01:22
 * @FilePath: \C-Programing-Language\Example\Chapter-4\grep.c
 */
/*将输入中包含特定“模式”或字符串的各行打印出来*/
#include <stdio.h>
#define MAXLINE 1000 /*最大输入行长度*/
#include "chapter-4.h"

char pattern[] = "ould"; /*待查找的模式*/

/*找出所有与模式匹配的行*/
int main()
{
    char line[MAXLINE];
    int found = 0;
    while (getline(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    return found;
}
