#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "vvedi num ";
    cin >> number;

    // ��������� ������� �� �������
    int number1;
    cout << "del ostatka: ";
    cin >> number1;
    int ans = number % 5;
    cout << "Otvet ostatka:";
    cout << ans <<std::endl;
    cout << "";
    // ���������  �������
    int ans_2=number / 2 ;
    cout << ans_2;

    return 0;
}
