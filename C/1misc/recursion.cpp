#include <iostream>
using namespace std;
// 1、接收一个unsigned int，然后按顺序打印每一位。input:1234，output：1 2 3 4；
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

// 2、编写函数，不允许创建临时变量，求字符串长度
int recur2(char *str)
{
    if (*str != '\0')
    { //注意加return，不然这个函数将不会返回任何值；这里也是为什么可以不用计数器的原因
        return 1 + recur2(str + 1);
    }
    else
    {
        return 0;
    }
}

// 3、求阶乘
int recur3(int n)
{
    // n!=1,有bug，因为输入负数就寄了
    if (n > 1)
    {
        return n * recur3(n - 1);
    }
    else
    {
        return 1;
    }
}

// 4、斐波那契数列：1，1，2，3，5，8，13....，求第n个数。
// f(n) = f(n-1)+f(n-2), n>=3; f(2) = 1;f(1) = 1;
//以下代码特别低效，他进行了重复大量的计算，因为他是2**(n-1)个数要算，而且有相当多重复计算的值，输个50进去可能算几分钟
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

//此时，应该考虑其他方法，比如迭代
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
        //三数替换，本来就是swap，所以不需要再造一个变量
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

// todo 汉诺塔问题
void hano(char a, char b, char c);
// todo 青蛙跳台阶问题

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