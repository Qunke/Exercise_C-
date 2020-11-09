/**********************************************
 * Function:
 * [���캯������������]
 * 1.���ù��캯�������������Ĵ��������෴����
 *   �ȵ��õĺ�����
 *   ����õ�������
 *   -> Ǳ̨����
 *      1.��������еĵ��ö�����Ժ���ܿ�ʼ����������û����ɵ��þͿ�ʼ������ʹ�ڴ���������
 *      2.����ˮ��˳���࣬��ȵĵ�һ��ˮ������󵹽����ӵ���һ����
 *        ����˵�ȵ���ˮ����ˮ��ȣ��󵹽�ˮ����ˮ�Ⱥȡ�
 * **********************************************/

#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student(int n, string nam, char s);  //�������캯��
	void display();  //������Ա����
	~Student();  //������������  ����ͬһ�����캯������������������ֻ��һ��
private:
	int num;
	string name;
	char sex;
};

//���ⶨ�幹�캯��
Student::Student(int n, string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
}

//���ⶨ����������
Student::~Student()
{
	cout << "Destructor called." << endl;
}

//���ⶨ���Ա����
void Student::display()
{
	cout << "Num = " << num << endl;
	cout << "Name = " << name << endl;
	cout << "Sex = " << sex << endl;
}

int main()
{
	Student std1(1, "fang_li", 'm');  //��������std1
	std1.display();  //���ó�Ա����display

    Student std2(2, "ada_a", 'w');  //��������std2
	std2.display();

	system("pause");
	return 0;
}