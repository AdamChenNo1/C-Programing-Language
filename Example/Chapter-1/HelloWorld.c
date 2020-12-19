/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2020-12-17 22:46:06
 * @LastEditors: Elon C
 * @LastEditTime: 2020-12-17 22:54:58
 * @FilePath: \C_C++\C Programing Language\Example\HelloWorld.c
 */
/*
*第一个C语言程序
*/
#include <stdio.h> /*包含标准库的信息*/

main()                        /*定义名为main的参数，它不接受任何参数值*/
{                             /*main函数的语句都被包括在花括号中*/
    printf("Hello World!\n"); /*main函数调用库函数printf以显示字符序列*/
} /*\n代表换行符*/

/*
main() {
    printf("Hello World!
    ");                     //错误

}
*/

/*
main() {
    printf("Hello");                     //printf函数永远不会自动换行，
    printf(" World!");                   
    printf("\n");                     
    //Hello World!
}
*/