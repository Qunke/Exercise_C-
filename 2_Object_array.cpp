/****************************************************
 * Function:
 * 1.为什么会有对象数组
 *   很多的实体(也可以称为对象)有相同的属性，只是属性的具体内容不同，
 *   所以可以使用对象数组处理程序
 * 
 *****************************************************/

#include<iostream>
using namespace std;

//声明类Box
class Box
{
public:
    Box(int h = 12, int w = 22, int len = 32) : height(h), width(w), length(len){};
    //声明构造函数Box, 类内定义构造函数，使用参数初始化表的方式对数据成员初始化
    ~Box() {cout << "Destructor called" << endl;};  //声明析构函数, 类内定义析构函数
    int volume();  //声明成员函数volume, 函数功能是用来求体积
private:
    int height;
    int width;
    int length;
};

//类外定义成员函数volume
int Box::volume()  
{
    return(height * width * length);
}


//主函数
int main()
{
    Box box[3] = {                   //声明并定义对象数组box[3]
        box[0] = Box(10, 3, 434),  //对象box[1],调用构造函数Box,提供第1个元素的实参
        box[1] = Box(10, 23, 43445),  //对象box[2],调用构造函数Box,提供第2个元素的实参
        box[2] = Box(132, 323, 4544)  //对象box[2],调用构造函数Box,提供第2个元素的实参
    };  //【注意】，此处是数组语句的结尾，所以要加分号

    for (int i = 0; i < 3; i++)
    {
        cout << "The volume of box " << i + 1 << " is " << box[i].volume() << endl;
    }
    
    system("pause");
    return 0;
}