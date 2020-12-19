/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:45:38
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 03:03:50
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-9_v1.c
 */
/*
*将输入复制到输出，并将其中连续的多个空格替换为单个空格
* 版本一
*/

#include <stdio.h>
int main()
{
    int c1, c2;
    c1 = getchar();
    while (c1 != EOF)
    {
        putchar(c1);
        while ((c2 = getchar()) != EOF)
        {
            if (c1 == ' ')
            {
                if (c2 != ' ')
                {
                    putchar(c2);
                    c1 = getchar();
                    break;
                }
            }
            else
            {
                c1 = c2;
                break;
            }
        }
    }
    //printf("Count of characters: table:%d | space:%d | enter:%d\n", count_tab, count_space, count_enter);
}
