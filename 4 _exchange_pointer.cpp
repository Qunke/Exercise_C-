/*******************************************************
 * Function:
 * 1.ʹ��ָ��ķ�����������a, b, c��ֵ
 * 
 * 
 * *******************************************************/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//������
int main()
{
    //�������������������õ�
    int display(int, int, int);
    void exchange(int* x, int* y, int* z);  //int* x ��ʾָ�����x ��������int*��������ָ�룬��ʾָ�뱾�����������
    void swap(int*x, int* y);

    srand(time(0));  //ʹ��ʱ���������������
    int a, b, c;
    a = rand() % 100;
    b = rand() % 100;
    c = rand() % 100;
    cout << a << ' ' << b << ' ' << c << endl;
    exchange(&a, &b, &c);

    system("pause");
    return 0;
}


//���庯��exchange(int* x, int* y, int* z)
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

//���庯��swap()
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