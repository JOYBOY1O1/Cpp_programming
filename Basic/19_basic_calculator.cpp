#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout << x + y << endl;
}

void sub(int x, int y)
{
    cout << x - y << endl;
}

void divide(int x, int y)
{
    cout << x / y << endl;
}

void muplti(int x, int y)
{
    cout << x * y << endl;
}

int main()
{
    int n1, n2, ch;

    cout << "Enter the operation to perform \n (1):Addition \n (2):Subtraction \n (3):Multiplication \n (4):Division \n :- ";
    cin >> ch;

    cout << "Enter a number = ";
    cin >> n1;

    cout << "Enter another number = ";
    cin >> n2;

    switch (ch)
    {
    case 1:
        add(n1, n2);
        break;
    case 2:
        sub(n1, n2);
        break;
    case 3:
        muplti(n1, n2);
        break;
    case 4:
        divide(n1, n2);
        break;
    default:
        cout << "invalid choice";
        break;
    }
                           
    return 0;
}