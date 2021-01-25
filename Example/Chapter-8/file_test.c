/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 23:49:05
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-26 00:10:40
 * @FilePath: \C-Programing-Language\Example\Chapter-8\file_test.c
 */
#include "file.h"

int main(int argc, char const *argv[])
{
    char *file = "file_test";
    char *mode = "w";
    FILE *f1 = fopen(file, mode);
    putchar(f1->flag);
    return 0;
}
