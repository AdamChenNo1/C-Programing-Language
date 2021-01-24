/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 16:21:13
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-15 17:14:09
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-14.h
 */
/*宏swap (t,x,y) :交换t类型的两个参数*/
#undef swap
#define swap(t, x, y)              \
    do                             \
    {                              \
        if ((x) != (y))            \
        {                          \
            t temp = (x);          \
            (x) = (y), (y) = temp; \
        }                          \
    } while (0)