/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-13 20:38:33
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-13 21:39:45
 * @FilePath: \C-Programing-Language\Example\Chapter-4\stack.c
 */
#include <stdio.h>

#define MAXVAL 100 /*栈val的最大深度*/

int sp = 0;         //下一个空闲位置
double val[MAXVAL]; //值栈

/*push函数：将f压入栈中*/
void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    }
    else
    {
        printf("error: stack full,can't push %g\n", f);
    }
}

/*pop函数：弹出并返回栈顶的数*/
double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}