#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    // 0 00000000 00000000000000000001001，二码一致
    //在float的视角上，s=0,E=0000 0000->E_r = -127， M = 0.00000000000000000001001，
    //则该数为0*M*2^(1-127) = 究极接近0，打印精度不够所以直接变0.0000000
    float *pFloat = (float *)&n;

    cout << (int)n << endl;
    //以浮点数取出里面的数，两者不一致，说明取数方式不一样
    cout << (float)*pFloat << endl;

    //以浮点数存入，两者不一致，两者存储方式不一样
    *pFloat = 9.0;
    // 1001.0 = 1.001*2^3；此时，s=0,E=3+127=1000 0010,M=001
    // 0 1000 0010 00000000000000000000001 = *pFloat
    // int 01000001000000000000000000000001，正数，二码合一
    cout << (int)n << endl;
    cout << (float)*pFloat << endl;
    system("pause");
    return 0;
}