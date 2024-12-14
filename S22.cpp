#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 1;
    string str;
    ifstream file_to_read;
    file_to_read.open("output.txt");
while (file_to_read >> str) {
    cout << n << ". " << str << endl;
    n++;
}
return 0;
}
