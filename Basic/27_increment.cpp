#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int a = 10;
    int y, b;

    b = a++;

    y = ++x;

    cout << "post increment of a=10; a++ => " << a << " " << b << endl;

    cout << "pre increment of x=10 ++x => " << x << " " << y << endl;
}