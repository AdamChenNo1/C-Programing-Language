/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-12 18:56:49
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-12 18:56:50
 * @FilePath: \C-Programing-Language\Example\Chapter-4\strindex.c
 */
/*strindex函数：返回t在s中的位置，若未找到则返回-1*/
int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}