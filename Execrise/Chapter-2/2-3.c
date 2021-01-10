/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-10 20:10:21
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-10 20:29:36
 * @FilePath: \C-Programing-Language\Execrise\Chapter-2\2-3.c
 */
/*把由十六进制数字组成的字符串（包含可选的前缀0x 或0X) 转换为与之等价的整型值。字符串中允许包含的数字包括： 0~9 、a~f 以及A~F。*/

#include <stdio.h>

int htoi(char s[])
{
    int i, n = 0;
    for (i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == 'X' || s[i] == 'x' || s[i] == '+' || s[i] == '-')
            continue;
        else if (s[i] >= '0' && s[i] <= '9')
            n = 16 * n + s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = 16 * n + s[i] - 'a';
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = 16 * n + s[i] - 'A';
    }
    return s[0] == '-' ? -n : n;
}

int main()
{
    char s[] = "0xf12";
    char s2[] = "-0x12";
    int v = htoi(s);
    int v2 = htoi(s2);
    printf("%s -> %d\n", s, v);
    printf("%s -> %d\n", s2, v2);
}