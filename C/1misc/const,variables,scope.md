
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

>�����������������������������ͨ����{}��ʾ��
```
#include<iostream>

//global variable�����������������̣�
//���Ե���ͬһ�����µĲ�ͬ�ļ��£�����ȫ����ʹ�ã�������Ҫ������������aΪ������Ҫ������extern int a��
//ȫ�ֱ���������ͬ��
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

>�������ڣ������Ĵ��������١��ֲ�������ֲ���Χ������ʼ���Ƴ��ֲ���Χ����������ȫ�֣������������������
```

```

>�������������
```
#define MAX 10
int main()
{
    //1.���泣��
    3.14;
    10;

    //2.const�����г����Եı���
    const int num = 10;
    //num = 20;//error����Ϊ������
    //int arr[num]= {0};//error����Ϊarr[]��������ǳ���������num�Ǿ��г����Եġ�������

    //3.#define ����ı�ʶ��������ע����int main()֮ǰ�Ĵ��룬��ȻҲ�ܷŽ�int main()��
    //MAX = 20;//error;
    int arr[MAX]= {0};

    //4.enum��ö�ٳ���������һһ�оٵĳ���
    enum Sex
    {
        MALE,//���Ը���ֵ
        FEMALE,
        SECRET
    };

    Sex s = MALE;
    //Sex s = H;//error����Ϊ����
    cout<<MALE<<FEMALE<<SECRET;//0,1,2��Ĭ�ϴ�0���������ֵ

    return 0;
}
```

