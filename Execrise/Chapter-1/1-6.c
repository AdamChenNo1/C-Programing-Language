/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-18 00:45:38
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-18 01:12:35
 * @FilePath: \C_C++\C Programing Language\Execrise\Chapter-1\1-6.c
 */
/*
*将输入一次一个字符地复制到输出
*/

#include <stdio.h>
int main()
{
    int is;
    int c;
    while (1) /*while 该字符不是文件结束指示符*/
    {
        if ((c = getchar()) != '\n')
        {
            is = c != EOF; /*读下一个字符*/
            printf("The value of %c != EOF is %d\n", c, is);
        }
    }
}
