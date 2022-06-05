#include <bits/stdc++.h>
using namespace std;

int TOH(int n, char from, char to, char aux)
{
    if (n == 1)
        return n;
    TOH(n - 1, from, aux, to);
    cout << "Move Disk " << n << " from " << from << " to " << to <<endl;
    TOH(n - 1, aux, to, from);
}
int main()
{
    int n = 4;
    TOH(n,'A','C','B');
}