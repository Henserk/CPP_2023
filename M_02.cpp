#include <iostream>
#include <cmath>

using namespace std;
float ploshad(int a, int n)
{
    float s;
    s=(n*(a*a))/(4 * tan(3.14/n));
    return s;
}

int main()
{
    cout << ploshad(2,4);
    return 0;
}
