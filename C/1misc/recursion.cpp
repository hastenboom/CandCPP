#include <iostream>
using namespace std;
// 1������һ��unsigned int��Ȼ��˳���ӡÿһλ��input:1234��output��1 2 3 4��
// void recur1(unsigned int num)
// {
//     int tmp = num % 10;
//     num /= 10;
//     if (num != 0)
//     {
//         recur1(num);
//     }
//     cout << tmp << " " ;
// }

void recur1(unsigned int n)
{
    if (n / 10 != 0)
    {
        recur1(n / 10);
    }
    cout << n % 10 << ' ';
}

// 2����д����������������ʱ���������ַ�������
int recur2(char *str)
{
    if (*str != '\0')
    { //ע���return����Ȼ������������᷵���κ�ֵ������Ҳ��Ϊʲô���Բ��ü�������ԭ��
        return 1 + recur2(str + 1);
    }
    else
    {
        return 0;
    }
}

// 3����׳�
int recur3(int n)
{
    // n!=1,��bug����Ϊ���븺���ͼ���
    if (n > 1)
    {
        return n * recur3(n - 1);
    }
    else
    {
        return 1;
    }
}

// 4��쳲��������У�1��1��2��3��5��8��13....�����n������
// f(n) = f(n-1)+f(n-2), n>=3; f(2) = 1;f(1) = 1;
//���´����ر��Ч�����������ظ������ļ��㣬��Ϊ����2**(n-1)����Ҫ�㣬�������൱���ظ������ֵ�����50��ȥ�����㼸����
// int count = 0;
// int recur4(int n)
// {
// //    if(n==3)
//   //  {
//     //   count++;
//     }
//     if (n >= 3)
//     {
//         return recur4(n - 1) + recur4(n - 2);
//     }
//     else if (n == 1 || n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

//��ʱ��Ӧ�ÿ��������������������
int fib(int n)
{
    int sum = 1;
    int rear = 1;
    int top = 1;
    if (n < 3)
    {
        return sum;
    }

    for (int i = 3; i <= n; i++)
    {
        //�����滻����������swap�����Բ���Ҫ����һ������
        // int tmp = 0;
        // sum = rear + top;
        // tmp = rear;
        // rear = sum;
        // top = tmp;
        sum = rear + top;
        top = rear;
        rear = sum;
    }
    return sum;
}

// todo ��ŵ������
void hano(char a, char b, char c);
// todo ������̨������

int main()
{
    recur1(1234);
    cout << recur2("pit") << endl;
    cout << recur3(-1) << endl;
    // cout << recur4(10) << endl;
    cout << fib(40) << endl;
    system("pause");
    return 0;
}