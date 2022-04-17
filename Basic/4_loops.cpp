#include <iostream>
using namespace std;

int main()
{
    int index = 0;
    while (index < 34)
    {
        cout << "We are at index number " << index << endl;
        index++;
    }

    do
    {
        cout << "We are at index1 number " << index << endl;
        index++;

    } while (index > 3454);

    for (int i = 0; i < 34; i++)
    {
        cout << "Value of i is = " << i << endl;
    }

    return 0;
}