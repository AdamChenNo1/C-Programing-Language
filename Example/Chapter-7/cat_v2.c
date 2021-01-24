/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 21:44:36
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 21:56:31
 * @FilePath: \C-Programing-Language\Example\Chapter-7\cat_v2.c
 */
#include <stdio.h>
#include <stdlib.h>

/*cat:连接多个文件，带错误处理*/
int main(int argc, char *argv[])
{
    FILE *fp;
    void filecopy(FILE *, FILE *);
    char *prog = argv[0]; //记下程序名，用于处理错误

    if (argc == 1) //如果命令行不带输入，则复制标准输入
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL)
            {
                fprintf(stderr, "%s:can't open %s\n", prog, *argv);
                exit(1);
            }
            else
            {
                filecopy(fp, stdout);
                fclose(fp);
            }
    if (ferror(stdout))
    {
        fprintf(stderr, "%s:error writing to stdout\n", prog);
        exit(2);
    }

    exit(0);
}
