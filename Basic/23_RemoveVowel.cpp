#include <bits/stdc++.h>
using namespace std;
 
string remVowel(string str)
{
    regex r("[aeiouAEIOU]");
     
    return regex_replace(str, r, "");
}
 
// Driver Code
int main()
{
    string str;
    cin>>str;    
    cout << (remVowel(str));
    return 0;
}