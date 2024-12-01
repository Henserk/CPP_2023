#include <iostream>
#include <string>
using namespace std;


int main(){
    setlocale(0,"Russian");
    int n;
    string numbers[10]={"НОЛЬ","Один","Два","Три","Четыре","Пять","Шесть","Семь","Восемь","Девять"};
    cout <<"Введите число от 0 до 9"<<::endl;
    cin >> n ;
    cout << numbers[n];


    return 0;
}
