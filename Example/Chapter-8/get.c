/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 00:52:58
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 00:54:30
 * @FilePath: \C-Programing-Language\Example\Chapter-8\get.c
 */

#include "syscalls.h"
/* get 函数：从pos位置处读人n个字节*/
int get(int fd, long pos, char *buf, int n)
{
    /*移动到位置pos处 */
    if (lseek(fd, pos, 0) >= 0)

        return read(fd, buf, n);
    else
        return -1;
}
