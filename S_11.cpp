#include <iostream>

using namespace std;

int main()
{
    int number=0;
    while(number<100){

        number=number+1;
        if (number%3==0){
            cout<<number<<endl;
        }
    }
    return 0;
}
