/* strcpy函数：将指针t指向的字符串复制到指针s 指向的位置；使用数组下标实现的版本*/
void strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}