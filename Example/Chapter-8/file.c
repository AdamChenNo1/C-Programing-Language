/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-25 21:11:07
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-26 00:08:59
 * @FilePath: \C-Programing-Language\Example\Chapter-8\file.c
 */
/*文件操作*/
#include <fcntl.h>
//#include "syscalls.h"
#include "file.h"
#include <stdlib.h>
FILE _iob[OPEN_MAX] = {
    {0, (char *)0, (char *)0, _READ, 0},           /*stdin*/
    {0, (char *)0, (char *)0, _WRITE, 1},          /*stdout*/
    {0, (char *)0, (char *)0, _WRITE | _UNBUF, 2}, /*stderr*/
};

/*fopen函数： 打开文件，并返回文件指针*/
FILE *fopen(char *name, char *mode)
{
    int fd;
    FILE *fp;

    if (*mode != 'r' && *mode != 'w' && *mode != 'a')
        return NULL;
    for (fp = _iob; fp < _iob + OPEN_MAX; fp++)
        if ((fp->flag & (_READ | _WRITE)) == 0)
            break;
    if (fp >= _iob + OPEN_MAX)
        return NULL;

    if (*mode == 'w')
        fd = creat(name, PERMS);
    else if (*mode == 'a')
    {
        if ((fd = open(name, O_WRONLY)) == -1)
            fd = creat(name, PERMS);
        lseek(fd, 0L, 2);
    }
    else
    {
        fd = open(name, O_RDONLY, 0);
    }

    if (fd == -1)
        return NULL;
    fp->fd = fd;
    fp->cnt = 0;
    fp->base = NULL;
    fp->flag = (*mode == 'r') ? _READ : _WRITE;
    return fp;
}

/*_fillbuf函数： 分配井填充输入缓冲区*/
int _fillbuf(FILE *fp)
{
    int bufsize;

    if ((fp->flag & (_READ | _EOF | _ERR)) != _READ)
        return EOF; //还未分配缓冲区
    bufsize = (fp->flag & _UNBUF) ? 1 : BUFSIZE;
    if (fp->base == NULL)
        if ((fp->base = (char *)malloc(bufsize)) == NULL)
            return EOF; //不能分配缓冲区
    fp->ptr = fp->base;
    fp->cnt = read(fp->fd, fp->ptr, bufsize);
    if (--fp->cnt < 0)
    {
        if (fp->cnt == -1)
            fp->flag |= _EOF;
        else
            fp->flag |= _ERR;
        fp->cnt = 0;
        return EOF;
    }
    return (unsigned char)*fp->ptr;
}
