# ģ��ʵ��һϵ��str����(������nϵ�еģ���Ϊ����ֱ����Ӧ�޸�)
```
#include <iostream>
#include <assert.h>
using namespace std;

//��Ȼ�ú�����û�иı�str�ڲ������ݣ�һ�����Ҽ���const
unsigned int my_strlen1(const char *str)
{
    //Ϊ�˱�֤str��һ��ָ����ȷ���ݵ�ָ�룬��ü���assert��assert�ڲ�������������ֱ��ֹͣ���иó���
    //?�������ڴ����ı�����char���飬������ֱ�ӷ�ָ�룬����Ҳûʲô��ϵ
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
    str += my_strlen1(str); //ָ��\0��
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
    //ֱ�Ӷ�λ����һ�����촦������ע�⣬���������ͬ�������ǻ�һֱ++��ȥ����ԭ���Ľ��ޣ�����-1��1��
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

//todo �ж�s2�Ƿ���s1�г���,���׵İ汾��ʹ��kmp�㷨
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
    // // 00000000 00000000 00000000 00000011����
    // // 00000000 00000000 00000000 00000100����
    // // 11111111 11111111 11111111 11111111,��
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
