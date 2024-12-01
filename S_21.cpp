#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    int a,b,c;
    cout <<"first number ";
    cin >> a;
    cout <<"second number ";
    cin >> b;
    for (a;c!=b;c++){
        cout << (c+1)*3 << endl;
    }
    file.open("output.txt");
    file << (c+1)*3 << endl;
    file.close();
    cin.get();
    return 0;
}
