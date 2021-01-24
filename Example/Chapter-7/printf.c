/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-23 16:21:30
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-23 16:58:40
 * @FilePath: \C-Programing-Language\Example\Chapter-7\printf.c
 */
#include <stdio.h>

/*printf函数的使用*/
int main(int argc, char const *argv[])
{
    char *s = "%Hell%o%World%";
    printf(":%s:\n", s);       //:Hello World:
    printf(":%10s:\n", s);     //:Hello World:
    printf(":%.10s:\n", s);    //:Hello Worl:
    printf(":%-10s:\n", s);    //:Hello World:
    printf(":%.15s:\n", s);    //:Hello World:
    printf(":%-15s:\n", s);    //:Hello World    :
    printf(":%15.10s:\n", s);  //:     Hello Worl:
    printf(":%-15.10s:\n", s); //:Hello Worl     :
    printf(":%.*s:\n", 4, s);  //:Hell:
    printf(s);
    printf("\n");
    printf(":s:\n", s); /* 正确*/
    return 0;
}
