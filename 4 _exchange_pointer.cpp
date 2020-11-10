/*******************************************************
 * Function:
 * 1.使用指针的方法交换整数a, b, c的值
 * 
 * 
 * *******************************************************/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//主函数
int main()
{
    //声明函数，主函数会用到
    int display(int, int, int);
    void exchange(int* x, int* y, int* z);  //int* x 表示指针变量x 的类型是int*，即整型指针，表示指针本身的数据类型
    void swap(int*x, int* y);

    srand(time(0));  //使用时间生成随机数种子
    int a, b, c;
    a = rand() % 100;
    b = rand() % 100;
    c = rand() % 100;
    cout << a << ' ' << b << ' ' << c << endl;
    exchange(&a, &b, &c);

    system("pause");
    return 0;
}


//定义函数exchange(int* x, int* y, int* z)
void exchange(int* x, int* y, int* z)
{
    if (*x < *y)
    {
        swap(x, y);
    }
    if (*x < *z)
    {
        swap(x, z);
    }
    if (*y < *z)
    {
        swap(y, z);
    }
    cout << *x << ' ' << *y << ' ' << *z << endl;
}

//定义函数swap()
void swap(int* x, int* y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}