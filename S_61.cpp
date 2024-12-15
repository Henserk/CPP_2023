#include <iostream>
#include <locale.h>
using namespace std;

class Bucket
{
public:
    int c; //переменная для хранения остатка
    int volume; //максимальная вместимость ведра
    int used; //текущее заполнение ведра
    Bucket(int x, int y)
    {
        volume=x;
        used=y;
    }
    int flush()
    {
        used=used * 0;

    }
    int fill(int a) //заполнение ведра
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
    cout << "Ведро: "<< completion.volume << endl;
    cout << "Заполнено на: " << completion.used << endl;
    int rest = completion.fill(15);
    cout << "Добавили 15"<< endl;
    cout << "Заполнено на: " << completion.used << endl;
    cout << "Не вместилось: " << rest << endl;
    completion.flush(); //сброс
    rest = completion.fill(8);
    cout << "Пустое ведро"<< endl;
    cout << "Заполнено на:" << completion.used << endl;
    cout << "Не вместилось: " << rest << endl;
    return 0;
}
