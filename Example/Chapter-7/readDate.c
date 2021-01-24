/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 18:14:02
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 18:27:02
 * @FilePath: \C-Programing-Language\Example\Chapter-7\readDate.c
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int day, year, month;
    char monthname[20];
    char line[] = "";
    while (getline(line, sizeof(line)) > 0)
        if (sscanf(line, "%d %s %d", &day, monthname, &year) == 3) //25 DEC 1990式的日期
            printf("valid:%s\n", line);
        else if (sscanf(line, "%d/%d/%d", &month, &day, &year) == 3) //mm/dd/yy形式的日期
            printf("valid:%s\n", line);
        else
            printf("invalid:%s\n", line);
    return 0;
}
