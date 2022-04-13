
```
#include<iostream>

//global variable
int a =100;
int main()
{
    //local variable
    //when LV's name is conflict with GV's, LV's priority is greater than GV's
    int a =10;
    cout<<a;

    return 0;
}
```

>作用域，哪里起作用哪里就是作用域，通常用{}表示；
```
#include<iostream>

//global variable，作用域是整个工程！
//所以当在同一工程下的不同文件下，他完全可以使用，但是需要声明，以下面a为例，需要声明：extern int a。
//全局变量不存在同名
int a =100;
int main()
{
    //local variable
    //when LV's name is conflict with GV's, LV's priority is greater than GV's
    int a =10;
    cout<<a;

    int b =0;
{
    cout<<b<<endl;//error
}
    return 0;
}

```

>生命周期：变量的创建到销毁。局部：进入局部范围生命开始，推出局部范围生命结束；全局：整个程序的生命周期
```

```

>常量：不变的量
```
#define MAX 10
int main()
{
    //1.字面常量
    3.14;
    10;

    //2.const，具有常属性的变量
    const int num = 10;
    //num = 20;//error，因为常变量
    //int arr[num]= {0};//error，因为arr[]里面必须是常量，但是num是具有常属性的“变量”

    //3.#define 定义的标识符常量，注意在int main()之前的代码，当然也能放进int main()来
    //MAX = 20;//error;
    int arr[MAX]= {0};

    //4.enum，枚举常量，可以一一列举的常量
    enum Sex
    {
        MALE,//可以赋初值
        FEMALE,
        SECRET
    };

    Sex s = MALE;
    //Sex s = H;//error，因为常量
    cout<<MALE<<FEMALE<<SECRET;//0,1,2，默认从0如果不赋初值

    return 0;
}
```

