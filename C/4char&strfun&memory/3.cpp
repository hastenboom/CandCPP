#include <iostream>
#include <assert.h>
#include <string.h>

using namespace std;

void *my_memcpy(void *des, const void *base, unsigned int n)
{
    //记录des的起始地址，因为des在之后会变，那么就返回不到原来的des
    assert(des && base);
    void *tmp = des;
    while (n--)
    {
        *(char *)des = *(char *)base;
        des = (char *)des + 1;
        base = (char *)base + 1;
        //因为强制类型转换是临时的，++的不是强制类型的，任然是void*，如果使用前置++，不是所有编译器都通用
        //如果是(*(char*)des)++也不行，因为解引用后就是值，变成值++
        // *(char *)des++ = *(char *)base++;
    }
    return tmp;
}

void *my_memmove(void *des, const void *base, unsigned int n)
{
    assert(des && base);
    void *tmp = des;
    if (des < base)
    {
        while (n--)
        {
            *(char *)des = *(char *)base;
            des = (char *)des + 1;
            base = (char *)base + 1;
        }
    }
    else
    {
        while (n--)
        {
            *((char *)des + n) = *((char *)base + n);
        }
    }
    return tmp;
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6};
    int arr2[10] = {0};
    int n = sizeof(arr2) / sizeof(int);
    my_memcpy(arr1, arr2, 3);

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }
    system("pause");
    return 0;
}