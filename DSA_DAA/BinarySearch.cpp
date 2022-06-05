#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int A[], int n, int key) // n = size (num of elements)
{
    int low = 0, high = n, mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (A[mid] == key)
            return mid;
        if (A[mid] >= key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int n, k;
    cout << "Enter number of elements :";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Key element :";
    cin >> k;
    int result = BinarySearch(A, n, k);
    cout << "Index of element " << k << " is " << result;
}