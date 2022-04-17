#include <iostream>

using namespace std;

int main()
{
    int numGrid[3][2] = {
        {1, 2}, // 0     {0,1}
        {3, 4}, // 1     {0,1}
        {5, 6}  // 2     {0,1}

    };
    //    cout << numGrid[2][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numGrid[i][j];
        }
        cout << endl;
    }
    
}
