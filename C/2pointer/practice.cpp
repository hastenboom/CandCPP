
#include <iostream>
using namespace std;

// int main()
// {
//     int a[] = {1, 2, 3, 4};

//     cout << sizeof(a) << endl;         // 16
//     cout << sizeof(a + 0) << endl;     //?16 X 8
//     cout << sizeof(*a) << endl;        // 4
//     cout << sizeof(a + 1) << endl;     //?  X 8
//     cout << sizeof(a[1]) << endl;      // 4
//     cout << sizeof(&a) << endl;        // 8
//     cout << sizeof(*&a) << endl;       //? 4 X
//     cout << sizeof(&a + 1) << endl;    // 8
//     cout << sizeof(&a[0]) << endl;     // 8
//     cout << sizeof(&a[0] + 1) << endl; // 8

//     system("pause");

//     return 0;
// }

// int main()
// {
//     char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//     cout << sizeof(arr) << endl;         // 6
//     cout << sizeof(arr + 0) << endl;     // 4/8
//     cout << sizeof(*arr) << endl;        // 1
//     cout << sizeof(arr[1]) << endl;      // 1
//     cout << sizeof(&arr) << endl;        // 4/8
//     cout << sizeof(&arr + 1) << endl;    // 4/8
//     cout << sizeof(&arr[0] + 1) << endl; // 4/8

//     system("pause");
//     return 0;
// }

#include <string.h>
int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << strlen(arr) << endl;
    cout << strlen(arr + 0) << endl;
    // cout << strlen(*arr) << endl;
    // cout << strlen(arr[1]) << endl;
    // cout << strlen(&arr) << endl;
    // cout << strlen(&arr+1) << endl;
    cout << strlen(&arr[0] + 1) << endl;

    system("pause");
    return 0;
}