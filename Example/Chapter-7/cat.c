/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-24 20:09:23
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-24 21:52:46
 * @FilePath: \C-Programing-Language\Example\Chapter-7\cat.c
 */
/*cat：连接多个文件*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    void filecopy(FILE *, FILE *);
    if (argc == 1) //没有命令行参数，则复制标准输入
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
        {
            if ((fp = fopen(*++argv, "r")) == NULL)
            {
                printf("cat:can't open %s\n", *argv);
                return 1;
            }
            else
            {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    return 0;
}
