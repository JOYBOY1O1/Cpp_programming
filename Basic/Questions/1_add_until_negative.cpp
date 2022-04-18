#include <iostream>

using namespace std;

int main()
{
    int sum=0,n;
    cin>>n;

    while(n>0)
    {
        sum +=n;
        cin>>n;
    }
    
    cout<<sum;

    return 0;
}