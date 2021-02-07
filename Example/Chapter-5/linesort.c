#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /*进行排序的最大文本行数*/

char *lineptr[MAXLINES]; /*指向文本行的指针数组*/
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/*对输入的文本行进行排序*/
int main()
{
    int nlines; /*读取的输入行数目*/

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    }
    else
    {
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000 /*每个输入文本行的最大长度*/
int getline(char *, int);
char *alloc(int);

/*readline函数：读取输入行*/
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else
        {
            line[len - 1] = '\0'; /*删除换行符*/
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/*getline函数：将一行读入到s中并返回其长度*/
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/*writelines函数：写输出行*/
void writelines(char *lineptr[], int nlines)
{
    // for (int i = 0; i < nlines; i++)
    // printf("%s\n", lineptr[i]);
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}

/* qsort函数：按递增顺序对v[left]...*v[right]进行排序 */
void qsort(char *v[], int left, int right)
{
    int i, last;

    void swap(char *v[], int i, int j);
    if (left >= right) /*如果数组元素的个数小于2, 则返回*/
        return;

    swap(v, left, left + (right - left) >> 1);
    last = left;

    for (i = left + 1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap函数：交换v[i]和v[j]*/
void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}