/****************************************************
 * Function:
 * 关于指针的 点说明
 * 1.指针(Pointer)是一类特殊的【变量】;
 * 2.指针的特殊之处在于它是指向另一个变量
 * 3.[指针与变量的区别]可以用指针来指向其他的变量 
 * 4.关于指针的2个符号：
 *   1) * 指针运算符 或 间接访问运算符
 *   2) & 取址运算符
 * 5.关于指针的2点【注意】事项
 *   1)不能用一个整数给指针型变量赋初值
 *   2)在定义指针变量时必须指定基本类型
 * 6.思考
 *   1)int* p; p = &a; 思考 &*p 什么含义 [& *p 等价于 &a]
 *   2)int* p; p = &a; 思考 *&p 什么含义 [* &p 等价于 &a]
 *   3)int a; 思考 *&a 和 &*a分别有什么含义
 * 7.我的关于指针的理解
 *   1)指针是一个 变量, 指针的类型是 int* || char* ||string* 等等类似
 *   2)*&相消
 *   3)**不可消
 * 8.【理解下面的程序】
 * ****************************************************/

//使用指针交换两个整型变量的值
#include<iostream>
using namespace std;


//声明并定义交换函数
//实参到形参传递数据，最终实参的值不改变，即实参x, y的值不改变
//虚实结合是采用的单向的值传递
void swap_argument2parameter(int x, int y)  //形参定义两个整型变量
{
    int* p1;
    int* p2;
    int* p;  //定义两个 int*型 指针变量p1, p2【注意是指针变量】
    int* pp1;
    int* pp2;
    int** pp3;
    p1 = &x;  //把变量a的地址赋给指针型变量p1
    p2 = &y;  //把变量b的地址赋给指针型变量p2
    pp1 = *&p1;
    pp2 = &*p1;
    pp3 = &pp1;

    p = p1;
    p1 = p2;
    p2 = p;
   
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "p1:" << p1 << endl;
    cout << "pp1:" << pp1 << endl;
    cout << "pp2:" << pp2 << endl;
    cout << "*pp3:" << *pp3 << endl;
    cout << "pp3:" << pp3 << endl;
    cout << "p1 = " << *p1 << endl;  //注意此处为*p1
    cout << "p2 = " << *p2 << endl;  //注意此处为*p2
}

//声明并定义交换函数
//实参到形参传递数据，最终实参的值不改变，即实参x, y的值不改变
void swap_parameter2argument(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


//主函数
int main()
{
    int x, y;  //定义两个整型变量
    int *pointer_1;
    int *pointer_2;
    pointer_1 = &x;
    pointer_2 = &y;
    x = 45;
    y = 23;
    swap_argument2parameter(x, y);

    //下面的函数实现了 通过调用函数使变量的值发生变化，在主调函数中使用这些改变了的值
    swap_parameter2argument(pointer_1, pointer_2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    system("pause");
    return 0;
}