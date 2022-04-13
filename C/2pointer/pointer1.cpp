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

// char *my_strcpy(char *dest, const char *src)
// {
//     return dest;
// }

// int main()
// {
//     char *(*pf)(char *, const char *);
//     char *(*parr_f[4])(char *, const char *) =
//         {my_strcpy, my_strcpy, my_strcpy, my_strcpy};

//     return 0;
// }

// void menu()
// {
//     cout << "*******************" << endl;
//     cout << "**1.add     2.sub**" << endl;
//     cout << "**3.mul     4.div**" << endl;
//     cout << "******0.exit*******" << endl;
//     cout << "*******************" << endl;
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

// int DIV(int a, int b)
// {
//     return 3;
// }

// struct Stu
// {
//     char name[30];
//     int age;
// };

// int cmp_stu(void *e1, void *e2)
// {
//     return (int)(((Stu *)e1)->age - ((Stu *)e2)->age);
// }

// // void qsort (void* base,
// //             size_t num,
// //            size_t size,
// //             int (*compar)(const void*,const void*));

// void Swap(char *buf1, char *buf2, int width)
// {
//     int i = 0;
//     for (i = 0; i < width; i++)
//     {
//         char tmp = *buf1;
//         *buf1 = *buf2;
//         buf1++;
//         buf2++;
//     }
// }

// void bubble_sort(void *base,
//                  int num,
//                  int size,
//                  int (*cmp)(void *e1, void *e2))
// {
//     for (int i = 0; i < num - 1; i++)
//     {
//         for (int j = 0; j < num - 1 - i; j++)
//         {
//             // to compare，考虑通用性，此时单单的>，<，=，不好操作，
//             //所以bubble_sort的第四个参数就是为了处理这个问题
//             //对于cmp来说，设计时我并不知道使用者使用什么类型的数据，所以参数也需要用空指针
//             // cmp的参数是两个比较的元素，base是数组首元素地址，但是是void*，所以没办法用来定位（base+1）行不通
//             //强制转换也不好用，因为设计者并不知道使用者的数据类型(int*)
//             //所以size这个参数就发挥作用了，我们强制转化为char*,然后char只占一个字符，所以
//             //(char*)base+size base[0],base[1]，的提取

//             if (cmp((char *)base + j * size, (char *)base + (j + 1) * size) > 0)
//             {
//                 Swap((char *)base + j * size, (char *)base + (j + 1) * size, size);
//             }
//         }
//     }
// }
// int main()
// {
//     Stu s[3] = {{"aa", 40}, {"bb", 20}, {"cc", 30}};
//     int len = sizeof(s) / sizeof(s[0]);
//     // qsort(s, len, sizeof(s[0]), cmp_stu);
//     bubble_sort(s, len, sizeof(s[0]), cmp_stu);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << s[i].name << ": " << s[i].age << endl;
//     }

//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};

    cout << sizeof(a) << endl;         // 16
    cout << sizeof(a + 0) << endl;     //?16 X 8
    cout << sizeof(*a) << endl;        // 4
    cout << sizeof(a + 1) << endl;     //?  X 8
    cout << sizeof(a[1]) << endl;      // 4
    cout << sizeof(&a) << endl;        // 8
    cout << sizeof(*&a) << endl;       //? 4 X
    cout << sizeof(&a + 1) << endl;    // 8
    cout << sizeof(&a[0]) << endl;     // 8
    cout << sizeof(&a[0] + 1) << endl; // 8

    system("pause");

    return 0;
}