#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"NON PRIME number"<<endl;
            break;
        }
    }
    if(i==n) cout<<"PRIME number"<<endl;

    return 0;
}