#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int factorail(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorail(n - 1);
}

int main()
{
    int a;
    cout<<"Enter a number = ";
    cin>>a;
    cout<<"The factorail = "<<factorail(a)<<endl;
    cout<<"The fibonacci sequence at position = "<<fib(a)<<endl;

    return 0;
}