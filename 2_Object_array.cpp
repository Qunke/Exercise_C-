/****************************************************
 * Function:
 * 1.Ϊʲô���ж�������
 *   �ܶ��ʵ��(Ҳ���Գ�Ϊ����)����ͬ�����ԣ�ֻ�����Եľ������ݲ�ͬ��
 *   ���Կ���ʹ�ö������鴦�����
 * 
 *****************************************************/

#include<iostream>
using namespace std;

//������Box
class Box
{
public:
    Box(int h = 12, int w = 22, int len = 32) : height(h), width(w), length(len){};
    //�������캯��Box, ���ڶ��幹�캯����ʹ�ò�����ʼ����ķ�ʽ�����ݳ�Ա��ʼ��
    ~Box() {cout << "Destructor called" << endl;};  //������������, ���ڶ�����������
    int volume();  //������Ա����volume, �������������������
private:
    int height;
    int width;
    int length;
};

//���ⶨ���Ա����volume
int Box::volume()  
{
    return(height * width * length);
}


//������
int main()
{
    Box box[3] = {                   //�����������������box[3]
        box[0] = Box(10, 3, 434),  //����box[1],���ù��캯��Box,�ṩ��1��Ԫ�ص�ʵ��
        box[1] = Box(10, 23, 43445),  //����box[2],���ù��캯��Box,�ṩ��2��Ԫ�ص�ʵ��
        box[2] = Box(132, 323, 4544)  //����box[2],���ù��캯��Box,�ṩ��2��Ԫ�ص�ʵ��
    };  //��ע�⡿���˴����������Ľ�β������Ҫ�ӷֺ�

    for (int i = 0; i < 3; i++)
    {
        cout << "The volume of box " << i + 1 << " is " << box[i].volume() << endl;
    }
    
    system("pause");
    return 0;
}