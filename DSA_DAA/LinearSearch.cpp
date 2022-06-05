#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int A[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == key) return i;
    }
    return -1;
}

int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(A) / sizeof(A[0]);
    int key = 5;
    int result = LinearSearch(A, size, key);
    cout << result;
}