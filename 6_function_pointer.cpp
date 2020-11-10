/**************************************************************
 * Function:函数与指针
 * 1.用指针变量代替函数
 * 2.用指针变量的指针做函数的参数
 * 3.返回指针值的函数　格式为：
 * 　int* a(int x, int y);
 * **************************************************************/

#include<iostream>
#include<ctime>
using namespace std;

//主函数
int main()
{
    int max(int x, int y);  //声明函数

    srand(time(0));  //使用时间生成随机数种子
    int a, b;
    int (*p)(int, int);  //【注意格式】定义指向函数的指针变量p,
    a = rand() % 70;
    b = rand() % 88;
    p = max;  //【注意此句格式】指针变量p指向函数的首地址

    cout << "a = " << a << " b = " << b << endl;
    cout << "The max is: " << max(a, b) << endl;
    
    system("pause");
    return 0;
}

int max(int x,int y)
{
    return x > y ? x : y;  //返回x, y中的最大值
}