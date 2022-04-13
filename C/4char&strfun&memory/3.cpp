#include <iostream>
#include <assert.h>
#include <string.h>

using namespace std;

void *my_memcpy(void *des, const void *base, unsigned int n)
{
    //��¼des����ʼ��ַ����Ϊdes��֮���䣬��ô�ͷ��ز���ԭ����des
    assert(des && base);
    void *tmp = des;
    while (n--)
    {
        *(char *)des = *(char *)base;
        des = (char *)des + 1;
        base = (char *)base + 1;
        //��Ϊǿ������ת������ʱ�ģ�++�Ĳ���ǿ�����͵ģ���Ȼ��void*�����ʹ��ǰ��++���������б�������ͨ��
        //�����(*(char*)des)++Ҳ���У���Ϊ�����ú����ֵ�����ֵ++
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