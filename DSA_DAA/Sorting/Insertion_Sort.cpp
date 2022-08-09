#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--; // j should not go below zero
        }
        arr[j + 1] = current;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}