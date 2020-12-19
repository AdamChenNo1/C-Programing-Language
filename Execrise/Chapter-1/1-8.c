/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:45:38
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 01:46:31
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-8.c
 */
/*
*统计空格、制表符和换行符的个数
*/

#include <stdio.h>
int main()
{
    int count_tab, count_space, count_enter, c;
    count_tab = 0;
    count_space = 0;
    count_enter = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            count_tab++;
        case ' ':
            count_space++;
        case '\n':
            count_enter++;
        }
    }
    printf("Count of characters: table:%d | space:%d | enter:%d\n", count_tab, count_space, count_enter);
}
