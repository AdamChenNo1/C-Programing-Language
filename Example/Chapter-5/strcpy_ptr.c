/*strcpy函数：将指针t指向的字符串复制到指针s指向的位置；使用指针方式实现的版本 */
void strcpy(char *s, char *t)
{
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}