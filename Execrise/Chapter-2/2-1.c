/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-22 19:23:25
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-22 19:53:07
 * @FilePath: \C_C++\C-Programing-Language\Execrise\Chapter-2\2-1.c
 */
#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 方法一：打印标准头文件中的值 */
    printf("-----------------------------------------\n");
    printf("type                  min              max\n");
    printf("signed char           %d               %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char         %d               %d\n", 0, UCHAR_MAX);
    printf("signed short          %d               %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned char         %d               %d\n", 0, USHRT_MAX);
    printf("signed int            %d               %d\n", INT_MIN, INT_MAX); //未定义SINT_MIN和SINT_MAX
    printf("unsigned int          %d               %d\n", 0, UINT_MAX);
    printf("signed long           %d               %d\n", LONG_MIN, LONG_MAX);
    printf("unsigned long         %d               %d\n", 0, ULONG_MAX);
    printf("-----------------------------------------\n");
    /* 方法一:计算各个值 */
    signed char sc_max = -1;
    signed char sc_min = 0;
    while (sc_max < 0)
        sc_max--;
    while (sc_min > 0)
        sc_min--;
    printf("-----------------------------------------\n");
    printf("type                  min              max\n");
    printf("signed char           %d               %d\n", sc_min, sc_max);
    printf("unsigned char         %d               %d\n", 0, UCHAR_MAX);
    printf("signed short          %d               %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned char         %d               %d\n", 0, USHRT_MAX);
    printf("signed int            %d               %d\n", INT_MIN, INT_MAX); //未定义SINT_MIN和SINT_MAX
    printf("unsigned int          %d               %d\n", 0, UINT_MAX);
    printf("signed long           %d               %d\n", LONG_MIN, LONG_MAX);
    printf("unsigned long         %d               %d\n", 0, ULONG_MAX);
    printf("-----------------------------------------\n");

    return 0;
}
