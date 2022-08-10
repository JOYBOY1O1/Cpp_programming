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
    int size,key;
    cout<<"Enter array size: ";
    cin>>size;
    int A[size];
    
    for(int i=0;i<size;i++){
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>A[i];
    }
    cout<<"Enter key to search: ";
    cin>>key;
    

    int result = LinearSearch(A, size, key);
    cout << "Index of "<<key<<" is "<<result;
}
