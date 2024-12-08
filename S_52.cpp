#include <iostream>

using namespace std;


int print (int a){
    return a+1;
}

float print (float a, float b){
    return a+b;
}

char print (char a, char b){
    return a+b;
}

int print (int a, int b){
    return a+b;
}

int main()
{
 cout<<print(4.3f,1.1f);
    return 0;
}
