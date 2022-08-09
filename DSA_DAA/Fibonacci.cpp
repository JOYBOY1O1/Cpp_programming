#include<bits/stdc++.h>
using namespace std;

#include <unordered_map>
#define Print(x) std::cout<<"\n" << x << std::endl;

int fib_recursion(int n)
{
    if(n<=1) return n;
    return fib_recursion(n-1)+fib_recursion(n-2);
}
int fib_iteration(int n){
    if (n <= 1) {
        return n;
    }
 
    int previousFib = 0, currentFib = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int newFib = previousFib + currentFib;
        previousFib = currentFib;
        currentFib = newFib;
    }
 
    return currentFib;
}
int fib_memo(const int &n)
{
    static map<int, unsigned long long int> memo;
    if (n < 3)
        return 1;
    if (memo.count(n) > 0)
        return memo[n];
    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}

int main()
{
    int n;
    cout<<"Enter a Value :";
    cin>>n;
    
    cout<<"Fibonacci using Recursion ";
    Print(fib_recursion(n));
    
    cout<<"Fibonacci using Iteration ";
    Print(fib_iteration(n));
    
    cout<<"Fibonacci using Memoization ";
    Print(fib_memo(n));
    return 0;
}
