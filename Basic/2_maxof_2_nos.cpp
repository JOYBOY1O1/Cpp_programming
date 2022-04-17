#include<iostream>

using namespace std;

int main()
{
    int n1,n2,max,min;
    cin>>n1>>n2;

    if(n1>n2)
    {
        max=n1;
        min=n2;
    }
    else
    {
        max=n2;
        min=n1;
    }

    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;

    // if(n1>n2)
    // {
    //     cout<<n1<<" is max"<<endl;
    //     cout<<n2<<" is min"<<endl;
    // } 

    // else
    // {   cout<<n2<<" is max"<<endl;
    //     cout<<n1<<" is min"<<endl;
    // }

    return 0;

}