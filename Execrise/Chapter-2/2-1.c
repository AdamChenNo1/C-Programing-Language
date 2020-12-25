/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-22 19:23:25
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-24 23:42:52
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-1.c
 */
#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 方法一：打印标准头文件中的值 */
    printf("-----------------------------------------\n");
    printf("type                  min              max\n");
    printf("signed char           %d               %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char         %u               %u\n", 0, UCHAR_MAX);
    printf("signed short          %u               %u\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short        %d               %d\n", 0, USHRT_MAX);
    printf("signed int            %d               %d\n", INT_MIN, INT_MAX); //未定义SINT_MIN和SINT_MAX
    printf("unsigned int          %u               %u\n", 0, UINT_MAX);
    printf("signed long          %ld              %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long        %lu              %lu\n", 0, ULONG_MAX);
    printf("-----------------------------------------\n");
    /* 方法一:计算各个值 */
    /* ----signed char -------*/
    signed char sc_max = -1;
    signed char sc_min;
    while (sc_max < 0)
        sc_max--;
    sc_min = sc_max + 1;
    /* ----unsigned char -------*/
    unsigned char tuc, uc_max;
    tuc = uc_max = 1;
    unsigned char uc_min = 0;

    while ((tuc <<= 1) > 0)
    {
        uc_max += tuc;
    }
    /* ----signed short -------*/
    signed short ss_max = -1;
    signed short ss_min;
    while (ss_max < 0)
    {
        ss_max--;
    }
    ss_min = ss_max + 1;
    /* ----unsigned short -------*/
    unsigned short tus, us_max;
    tus = us_max = 1;
    unsigned short us_min = 0;

    while ((tus <<= 1) > 0)
    {
        us_max += tus;
    }
    /* ----signed int -------*/
    signed int si_max = -1;
    signed int si_min;
    while (si_max < 0)
    {
        si_max--;
    }
    si_min = si_max + 1;
    /* ----unsigned int -------*/
    unsigned int tui, ui_max;
    tui = ui_max = 1;
    unsigned int ui_min = 0;

    while ((tui <<= 1) > 0)
    {
        ui_max += tui;
    }
    /* ----signed long -------*/
    signed long sl_max = -1;
    signed long sl_min;
    while (sl_max < 0)
    {
        sl_max--;
    }
    sl_min = sl_max + 1;
    /* ----unsigned long -------*/
    unsigned long tul, ul_max;
    tul = ul_max = 1;
    unsigned long ul_min = 0;

    while ((tul <<= 1) > 0)
    {
        ul_max += tul;
    }
    printf("-----------------------------------------\n");
    printf("type                  min              max\n");
    printf("signed char           %d               %d\n", sc_min, sc_max);
    printf("unsigned char         %u               %u\n", uc_min, uc_max);
    printf("signed short          %d               %d\n", ss_min, ss_max);
    printf("unsigned short        %u               %u\n", us_min, us_max);
    printf("signed int            %d               %d\n", si_min, si_max); //未定义SINT_MIN和SINT_MAX
    printf("unsigned int          %u               %u\n", ui_min, ui_max);
    printf("signed long          %ld              %ld\n", sl_min, sl_max);
    printf("unsigned long        %lu              %lu\n", ul_min, ul_max);
    printf("-----------------------------------------\n");

    return 0;
}
