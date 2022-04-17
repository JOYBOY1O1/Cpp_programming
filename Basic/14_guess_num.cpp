#include <iostream>

using namespace std;

int main()
{
    int SecretNum = 6;
    int guess;
    int gcount = 0;
    int glimit = 3;
    bool outofguess = false;

    while (SecretNum != guess && !outofguess)
    {
        if (gcount < glimit)
        {
            cout << "Enter a number : ";
            cin >> guess;
            gcount++;
        }
        else
            outofguess = true;
    }

    if(outofguess)
    {
        cout<<"You lose!";
    }
    else
    {
    cout << "You win!";
    }
}