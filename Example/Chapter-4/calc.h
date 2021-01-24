/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-22 21:06:55
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 21:07:27
 * @FilePath: \C-Programing-Language\Example\Chapter-4\calc.h
 */
#define MAXOP 100  /*操作数或操作符的最大长度*/
#define NUMBER '0' /*标识找到一个数*/

int getop(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);