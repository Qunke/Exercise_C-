/**************************************************************
 * Function:������ָ��
 * 1.��ָ��������溯��
 * 2.��ָ�������ָ���������Ĳ���
 * 3.����ָ��ֵ�ĺ�������ʽΪ��
 * ��int* a(int x, int y);
 * **************************************************************/

#include<iostream>
#include<ctime>
using namespace std;

//������
int main()
{
    int max(int x, int y);  //��������

    srand(time(0));  //ʹ��ʱ���������������
    int a, b;
    int (*p)(int, int);  //��ע���ʽ������ָ������ָ�����p,
    a = rand() % 70;
    b = rand() % 88;
    p = max;  //��ע��˾��ʽ��ָ�����pָ�������׵�ַ

    cout << "a = " << a << " b = " << b << endl;
    cout << "The max is: " << max(a, b) << endl;
    
    system("pause");
    return 0;
}

int max(int x,int y)
{
    return x > y ? x : y;  //����x, y�е����ֵ
}