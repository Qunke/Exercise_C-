/********************************************************
 * Function:�Զ�������Ԫ�ظ������ֱ��������ַ���������������Ԫ��
 * 1.�±귨--ֱ�ۣ�Ч�ʲ�����
 * 2.ָ�뷨--ֱ�ۣ�Ч�ʲ�����
 * 3.*��ָ�����ָ������Ԫ��--����Ч�ʸ�
 * 4.�Ƚ�3�ַ�����ִ���ٶȣ���ȱ��
 * ******************************************************/

#include<iostream>
#include<ctime>
using namespace std;

#define  arraySize 24
int main()
{
    int a[arraySize];
    srand(time(0));  //ʹ��ʱ���������������
    //�����鸳ֵ�����ԭʼ�����ֵ
    for (int i = 0; i < arraySize; i++)
    {
        a[i] = rand() % 100;
    }
    cout << endl;

    //1.�±귨
    for (int i = 0; i < arraySize; i++)
    {
        cout << a[i] << '\t';
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    //2.ָ�뷨
    for (int i = 0; i < arraySize; i++)
    {
        cout << *(a + i) << '\t';
        if ((i + 1) % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    //3.*��ָ�����ָ������Ԫ��
    int* p = a; //ָ�����ָ������a���׸�Ԫ��a[0]
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