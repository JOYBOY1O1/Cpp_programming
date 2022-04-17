#include <iostream>

using namespace std;

int main()
{   // cannot go out on even days
    int pocketmoney=1200;

    for(int days=1;days<=30;days++)
    {   
        if(days%2==0) continue;
        
        if(pocketmoney==0) break;

        cout<<"You can go out"<<endl;
        pocketmoney-=300;
    }
    
    return 0; 
}