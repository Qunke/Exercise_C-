/**********************************************
 * Function:
 * [构造函数与析构函数]
 * 1.调用构造函数与析构函数的次序正好相反，即
 *   先调用的后析构
 *   后调用的先析构
 *   -> 潜台词是
 *      1.必须等所有的调用都完成以后才能开始析构，否则没有完成调用就开始析构会使内存分配出问题
 *      2.跟喝水的顺序差不多，你喝的第一口水总是最后倒进杯子的那一个。
 *        或者说先倒进水杯的水后喝，后倒进水杯的水先喝。
 * **********************************************/

#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student(int n, string nam, char s);  //声明构造函数
	void display();  //声明成员函数
	~Student();  //声明析构函数  对于同一个构造函数名，析构函数有且只有一个
private:
	int num;
	string name;
	char sex;
};

//类外定义构造函数
Student::Student(int n, string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
}

//类外定义析构函数
Student::~Student()
{
	cout << "Destructor called." << endl;
}

//类外定义成员函数
void Student::display()
{
	cout << "Num = " << num << endl;
	cout << "Name = " << name << endl;
	cout << "Sex = " << sex << endl;
}

int main()
{
	Student std1(1, "fang_li", 'm');  //建立对象std1
	std1.display();  //调用成员函数display

    Student std2(2, "ada_a", 'w');  //建立对象std2
	std2.display();

	system("pause");
	return 0;
}