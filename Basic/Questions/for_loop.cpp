//You will be given two positive integers, a and b (a<=b), separated by a newline.
/*
Sample Input
8
11

Sample Output
eight
nine
even
odd
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
}
