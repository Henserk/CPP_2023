#include <iostream>

using namespace std;

int main(){
    int number=0;
    for (int i = 1; i <1000 ; i+=4){
            if (i%7==0){
                number+=i;
                cout<<i<<endl<<"Vsego::"<<number<<endl;
            }

    }
    cout<<number;
    return 0;
}
