#include <iostream>
using namespace std;

void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapPpointer_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{   // call by reference using pointers
    int x = 5, y = 10;
    cout<<"Value of X = "<<x<<"  Value of Y = "<<y<<endl;
    swap_pointer(&x,&y);
    cout<<"After Swap \nValue of X = "<<x<<"  Value of Y = "<<y<<endl;

    cout<<"\n\n";

    cout<<"Value of X = "<<x<<"  Value of Y = "<<y<<endl;
    swapPpointer_reference(x,y);
    cout<<"After Swap \nValue of X = "<<x<<"  Value of Y = "<<y<<endl;
    
    return 0;
}