#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, max;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            max = n1;
        }
        else
        {
            max = n3;
        }
    }
    
    if (n2 > n3)
    {
        max = n2;
    }

    else max = n3;

    cout << "Max out of three numbers = " << max << endl;

    return 0;
}