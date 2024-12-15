#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int get_angle(int a,int b,int c)
{
    if (a<=0 || b<=0 || c<=0 ){
        cout << "Error you entered incorrectly!";
        return 0;
    }
    else {
        float d,rad;
        int grad;
        d=((b*b)+(c*c)-(a*a))/(2*b*c);
        rad=acos(d);
        grad=rad*180/3.14;
        return grad;
    }
}

int main(){
    cout<< get_angle(5.,4.,3.);
    return 0;
}
