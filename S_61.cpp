#include <iostream>
#include <locale.h>
using namespace std;

class Bucket
{
public:
    int c; //���������� ��� �������� �������
    int volume; //������������ ����������� �����
    int used; //������� ���������� �����
    Bucket(int x, int y)
    {
        volume=x;
        used=y;
    }
    int flush()
    {
        used=used * 0;

    }
    int fill(int a) //���������� �����
    {
        if (a <= volume)
        {
            used=used +a;
            return 0;
        }
        else if (a > volume)
        {
            c=a - volume;
            c=c+used;
            used=volume;
            return c;

        }
    }
};
int main()
{
    setlocale(0, "Rus");
    Bucket completion(12, 3);
    cout << "�����: "<< completion.volume << endl;
    cout << "��������� ��: " << completion.used << endl;
    int rest = completion.fill(15);
    cout << "�������� 15"<< endl;
    cout << "��������� ��: " << completion.used << endl;
    cout << "�� ����������: " << rest << endl;
    completion.flush(); //�����
    rest = completion.fill(8);
    cout << "������ �����"<< endl;
    cout << "��������� ��:" << completion.used << endl;
    cout << "�� ����������: " << rest << endl;
    return 0;
}
