#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "Enter operator = ";

    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;
    
    default:
        cout<<"Invalid Operator"<<endl;
    }

    return 0;
}