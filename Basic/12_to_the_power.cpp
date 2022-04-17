#include <iostream>

using namespace std;

int power(int baseNum, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}

int main()
{   
    int a,b;
    cout<<"Enter the base Number : ";
    cin>>a;
    cout<<"Enter the Power : ";
    cin>>b;
    cout<<a<<" to the power "<<b<<" = "<<power(a,b);
}