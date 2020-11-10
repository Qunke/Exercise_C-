/**********************************************************
 * Function:
 * 1.若干字符串按字母顺序由小到大输出
 * 
 * 
 * **********************************************************/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);
    char *name[] = {"BASIC", "FORTRAN", "C++", "Pascal", "COBOL"};  //定义指针数组
    int n = 5;
    sort(name, n);
    print(name, n);

    system("pause");
    return 0;
}

void sort(char *name[], int n)
{
    char *temp;
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[i + 1]) > 0)
            {
                k = j;
            }
        }
        if (k != i)
        {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}
void print(char *name[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }
}