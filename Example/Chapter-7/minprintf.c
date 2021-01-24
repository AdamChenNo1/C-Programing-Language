/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-23 17:09:44
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-23 17:20:13
 * @FilePath: \C-Programing-Language\Example\Chapter-7\minprintf.c
 */
#include <stdarg.h>

/* minprintf 函数：带有可变参数表的简化的printf 函数*/
void minprintf(char *fmt, ...)
{
    va_list ap; //依次指向每个无名参数
    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt); //将ap指向第一个无名参数
    for (p = fmt, *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':
            ival = va_arg(ap, int); //va_arg使用一个类型名来决定返回的对象类型、指针移动的步长,并将ap指向下一个参数。
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%d", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
                putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap); //结束时的清理工作
}