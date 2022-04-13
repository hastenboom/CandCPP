# 模拟实现一系列str函数(不考虑n系列的，因为可以直接相应修改)
```
#include <iostream>
#include <assert.h>
using namespace std;

//既然该函数就没有改变str内部的内容，一定给我加上const
unsigned int my_strlen1(const char *str)
{
    //为了保证str是一个指向明确内容的指针，最好加上assert，assert内部的条件不满足直接停止运行该程序，
    //?但是由于创建的本身是char数组，他不能直接放指针，所以也没什么关系
    assert(str != NULL);
    while (*str != '\0')
    {
        return 1 + my_strlen1(str + 1);
    }
    return 0;
}

unsigned int my_strlen2(char *str)
{
    char *rear = str;
    while (*rear != 0)
    {
        rear += 1;
    }
    return rear - str;
}

char *my_strcpy(char *str, const char *base,unsig)
{
    while (*base != '\0')
    {
        *(str) = *(base);
        str += 1;
        base += 1;
    }
    *(str) = *(base);
    return str;
}

char *my_strcat(char *str, const char *base)
{
    str += my_strlen1(str); //指向\0处
    while (*base != '\0')
    {
        *(str) = *(base);
        str += 1;
        base += 1;
    }
    *(str) = *(base);
    return str;
}

int my_strcmp(const char *str1, const char *str2)
{
    int len1 = my_strlen1(str1);
    int len2 = my_strlen1(str2);
    int tmp = len1 > len2 ? len2 : len1;
    int i = 0;
    while (i != tmp)
    {
        if ((int)str1[i] < (int)str2[i])
        {
            return 1;
        }
        else if ((int)str1[i] > (int)str2[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}

int my_strcmp1(const char *str1, const char *str2)
{
    //直接定位到第一个差异处。但是注意，如果两者相同，则他们会一直++下去超出原来的界限，返回-1或1后
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    if (*str1 > *str2)
    {
        return -1;
    }
    else if (*str1 < *str2)
    {
        return 1;
    }
}

//todo 判断s2是否在s1中出现,进阶的版本是使用kmp算法
char* my_strstr(char* str1,char*str2)
{
    assert(str1 && str2);
    const char *s1 = NULL;
    const char *s2 = NULL;
    char *cp = str1;
    if(!*str2)
    {
        return (char *)cp;
    }
    while(*cp)
    {
        s1 = cp;
        s2 = str2;
        while(*s1 && *s2 && (*s1==*s2))
        {
            s1++;
            s2++;
        }
        if(*s2=='\0')
        {
            return cp;
        }
        cp++;
    }
    return NULL;
}

int main()
{
    // char str[] = "abc";
    // cout << my_strlen1(str) << endl;
    // cout << my_strlen2(str) << endl;
    // // 00000000 00000000 00000000 00000011，二
    // // 00000000 00000000 00000000 00000100，二
    // // 11111111 11111111 11111111 11111111,二
    // cout << my_strlen1("abc") - my_strlen2("abcd") << endl;
    char base1[] = "abcd";
    char base2[] = "efghij";
    char str1[20];
    my_strcpy(str1, base1);
    my_strcat(str1, base2);
    for (int i = 0; i < my_strlen1(str1); i++)
    {
        cout << str1[i] << endl;
    }

    system("pause");
    return 0;
}
```
