#include <iostream>

using namespace std;

double square(double num)
{
    double result = num * num;
    return result;
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    double n;
    int ch;
    cout << "Enter a number = ";
    cin >> n;

    cout << "Enter choice to perform task = (1):Square (2):Cube = ";
    cin >> ch;

    if (ch == 1)
    {
        cout << square(n);
    }
    else
    {
        cout << cube(n);
    }
}