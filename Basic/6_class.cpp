
#include <iostream>
using namespace std;

class Person
{
    public:

    string name;
    int yearOfbirth;

    void getname()
    {
        cout<<"Name = "<<name<<endl;
    }

    void getAge()
    {
        cout<<"Year of Birth = "<<yearOfbirth<<endl;
    }

};

int main()
{
    Person p1;
    p1.name = "Joy";
    p1.yearOfbirth = 2001;

    p1.getname();
    p1.getAge();

}