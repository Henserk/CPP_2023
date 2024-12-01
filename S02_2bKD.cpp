#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "vvedi num ";
    cin >> number;

    // Произвожу остаток от деления
    int number1;
    cout << "del ostatka: ";
    cin >> number1;
    int ans = number % 5;
    cout << "Otvet ostatka:";
    cout << ans <<std::endl;
    cout << "";
    // Произвожу  деления
    int ans_2=number / 2 ;
    cout << ans_2;

    return 0;
}
