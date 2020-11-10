/********************************************************
 * Function:自定义数组元素个数，分别按以下三种方法输出数组的所有元素
 * 1.下标法--直观，效率不够高
 * 2.指针法--直观，效率不够高
 * 3.*用指针变量指向数组元素--抽象，效率高
 * 4.比较3种方法的执行速度，优缺点
 * ******************************************************/

#include<iostream>
#include<ctime>
using namespace std;

#define  arraySize 24
int main()
{
    int a[arraySize];
    srand(time(0));  //使用时间生成随机数种子
    //给数组赋值并输出原始数组的值
    for (int i = 0; i < arraySize; i++)
    {
        a[i] = rand() % 100;
    }
    cout << endl;

    //1.下标法
    for (int i = 0; i < arraySize; i++)
    {
        cout << a[i] << '\t';
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    //2.指针法
    for (int i = 0; i < arraySize; i++)
    {
        cout << *(a + i) << '\t';
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    //3.*用指针变量指向数组元素
    int* p = a; //指针变量指向数组a的首个元素a[0]
    for (int i = 0; i < arraySize; i++)
    {
        cout << *(a + i) << '\t';
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    system("pause");
    return 0;
}