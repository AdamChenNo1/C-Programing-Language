/*
 * @Descripttion: 
 * @version: v0.1
 * @Author: Elon C
 * @Date: 2021-01-15 15:20:27
 * @LastEditors: Elon C
 * @LastEditTime: 2021-01-15 15:41:51
 * @FilePath: \C-Programing-Language\Execrise\Chapter-4\4-1.c
 */
/*函数strrindex(s,t):返回字符串t在s中最右边出现的位置。如果s中不包含t, 则返回-1。*/
int strrindex(char s[], char t[])
{
    int result = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int j, k;
        for (j = i, k = 0; s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            result = i;
    }

    return result;
}