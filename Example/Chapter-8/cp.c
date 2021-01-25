/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 16:52:11
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-25 20:53:14
 * @FilePath: \C-Programing-Language\Example\Chapter-8\cp.c
 */
#include <stdio.h>
#include <fcntl.h>
//#include "syscalls.h"
#define PERMS 0666 /*对于所有者、所有者组和其他成员均可读写*/

void error(char *, ...);
/*将一个文件复制到另一个文件*/
int main(int argc, char *argv[])
{
    int f1, f2, n;
    char buf[BUFSIZ];

    if (argc != 3)
    {
        error("Usage:cp from to");
    }

    if ((f1 = open(argv[1], O_RDONLY, 0)) == -1)
        error("cp:can't open %s", argv[1]);
    if ((f2 = creat(argv[2], PERMS)) == -1)
        error("cp:can't create %s,mode %03o", argv[2], PERMS);
    while ((n = read(f1, buf, BUFSIZ)) > 0)
        if (write(f2, buf, n) != n)
            error("cp:write error on file %s", argv[2]);
    return 0;
}
