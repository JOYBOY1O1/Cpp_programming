#include <iostream>

using namespace std;

class employee
{
    int a, b, c;

public:
    int d, e;
    void setdata(int x, int y, int z);
    
    void getdata()
    {
        cout<<"The value of a is "<<a <<endl;
        cout<<"The value of b is "<<b <<endl;
        cout<<"The value of c is "<<c <<endl;
        cout<<"The value of d is "<<d <<endl;
        cout<<"The value of e is "<<e <<endl;
    }
};

void employee :: setdata(int x, int y, int z)
{
    a=x;
    b=y;
    c=z;

} 
int main()
{
    employee obj;

//  obj.a=100; //cannot enter value through main as it is (private)
    obj.d=40;
    obj.e=50;
    obj.setdata(10,20,30);
    obj.getdata();





    return 0;
}