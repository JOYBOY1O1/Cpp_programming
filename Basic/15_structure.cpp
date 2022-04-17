#include <iostream>

using namespace std;

struct employee
{
    int eId;
    char favchar;
    float salary;
};

int main()
{
    struct employee joy;
    joy.eId = 1;
    joy.favchar = 'S';
    joy.salary = 20000000;

    cout << joy.eId << endl;
    cout << joy.favchar << endl;
    cout << joy.salary << endl;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = lunch;
    cout<<m1<<endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}
