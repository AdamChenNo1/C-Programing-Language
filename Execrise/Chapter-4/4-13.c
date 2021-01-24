/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 17:19:01
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-22 20:10:48
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-13.c
 */
#include <string.h>

/*递归版本的reverse(s)函数:将字符串s倒置。*/
void reverse(char s[])
{
    if (s[0] == '\0' || s[1] == '\0')
        return;
    else
    {
        int len = strlen(s);
        char *m = s + 1;
        char t = s[0];
        reverse(m);
        m[len - 1] = t;
        m[len] = '\0';
        s = m;
    }
}
/*
int main()
{
    char s[] = "asd";
    printf("%s\n", s);
    //reverse(s);
    //printf("%s\n", s);
}*/