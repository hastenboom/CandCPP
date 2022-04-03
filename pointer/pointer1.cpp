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
//     // sizeof(arr)提取整个数组的字节
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
//  * 因为是二维数组，传入的第一个元素是一个一维数组，所以要用一个数组指针作为参数
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
//             //关键在于解除引用后arr[0]（二维）视作指针；
//             //因为arr[i] = *(arr+i)，所以arr[i][j] = *(*(arr+i)+j)
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
//     //此时 arr为第一个数组{1，2，3，4，5}的地址，是一个数组地址，而不是{1}的地址
//     //他首先是一个arr[3]的一维数组，里面的元素是arr[5]，

//     // int:4bits;int* 8bit
//     // sizeof(arr[0])=20;
//     // sizeof(arr) = 56
//     // sizeof(arr) = 60,因为有3行20的arr[0];
//     //此处的arr[0]是&arr[0]，不是首元素地址
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
//     // ADD,SUB要写完整不能只有原型

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