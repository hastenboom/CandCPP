#include <iostream>

using namespace std;

// void test(int arr[])
// {
//     // arr[0] is int accounting of 4 bytes
//     // arr is int* accounting of 8bytes in 64x
//     //@param int arr[] is treated as the first element's address, not the entire array's address
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     cout << sz << endl;
// }

// int main()
// {
//     int arr[10] = {0};
//     //arr is treated as the address of the entire array
//     cout << sizeof(arr) / sizeof(arr[0]) << endl;
//     test(arr);
//     system("pause");

//     return 0;
// }

// int main()
// {
//     char arr[] = "abcdef";
//     char *pc = arr;
//     cout << arr << endl;
//     cout << pc << endl;
//     system("pause");
//     return 0;
// // }
// int main()
// {
//     // int 4bits;int * 8bits;
//     // sizeof(arr)��ȡ����������ֽ�
//     int arr1[] = {1, 2, 3};
//     int arr2[] = {2, 3, 4};
//     int arr3[] = {3, 4, 5};
//     int *parr[] = {arr1, arr2, arr3};

//     int col = sizeof(arr1) / sizeof(int); // col
//     int row = sizeof(parr) / sizeof(int *);

//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//             cout << *(parr[i]+ j)  << ' ';
//         cout << endl;
//     }
//     system("pause");
//     return 0;
// }

// /**
//  * @brief
//  * ��Ϊ�Ƕ�ά���飬����ĵ�һ��Ԫ����һ��һά���飬����Ҫ��һ������ָ����Ϊ����
//  *
//  * @param parr
//  * @param col
//  * @param row
//  */
// void show(int (*parr)[5], int col, int row)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             // cout << *(parr + i)[j] << endl;
//             //�ؼ����ڽ�����ú�arr[0]����ά������ָ�룻
//             //��Ϊarr[i] = *(arr+i)������arr[i][j] = *(*(arr+i)+j)
//             // cout << *(*(parr + i) + j) << ' ';
//             cout << parr[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int arr[3][5] = {{1, 2, 3, 4, 5},
//                      {2, 3, 4, 5, 6},
//                      {3, 4, 5, 6, 7}};
//     //��ʱ arrΪ��һ������{1��2��3��4��5}�ĵ�ַ����һ�������ַ��������{1}�ĵ�ַ
//     //��������һ��arr[3]��һά���飬�����Ԫ����arr[5]��

//     // int:4bits;int* 8bit
//     // sizeof(arr[0])=20;
//     // sizeof(arr) = 56
//     // sizeof(arr) = 60,��Ϊ��3��20��arr[0];
//     //�˴���arr[0]��&arr[0]��������Ԫ�ص�ַ
//     int col = sizeof(arr[0]) / sizeof(int);
//     int row = sizeof(arr) / sizeof(arr[0]);
//     show(arr, col, row);

//     system("pause");

//     return 0;
// }

// int ADD(int a, int b)
// {
//     return 0;
// }
// int SUB(int a, int b)
// {
//     return 1;
// }
// int MUL(int a, int b)
// {
//     return 2;
// }

// int main()
// {
//     int *arr[5];

//     int (*pfun[3])(int, int) = {ADD, SUB, MUL};
//     // ADD,SUBҪд��������ֻ��ԭ��

//     for (int i = 0; i < 3; i++)
//     {
//         cout << pfun[i](1, 2);
//     }
//     system("pause");
//     return 0;
// }

char *my_strcpy(char *dest, const char *src)
{
    return dest;
}

int main()
{
    char *(*pf)(char *, const char *);
    char *(*parr_f[4])(char *, const char *) =
        {my_strcpy, my_strcpy, my_strcpy, my_strcpy};

    return 0;
}