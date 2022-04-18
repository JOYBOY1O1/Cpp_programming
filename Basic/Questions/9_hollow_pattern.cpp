#include <iostream>
using namespace std;
int main()
{
    int rows,columns,i,j;
    cout<<"enter rows and columns: ";
    cin>>rows>>columns;

    for(i=1 ; i<=rows ; i++)
    {                                               //6 rows //5 columns
        for(j=1; j<=columns; j++)                   // * * * * *
        {                                           // *       *
            if(i==1 || i==rows)                     // *       *
            {                                       // *       *
                cout<<" * ";                        // *       *
            }                                       // * * * * *
            else if(j==1 || j==columns)
            {
                cout<<" * ";
            }
            else cout<<"   ";
        }
        cout<<endl;
    }

}