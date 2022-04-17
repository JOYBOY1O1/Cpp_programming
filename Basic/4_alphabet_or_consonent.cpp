#include<iostream>

using namespace std;

int main()
{
    char c;

    cout<<"Enter an Alphabet = ";
    cin>>c;

    int lower_case, upper_case;

    lower_case = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    upper_case = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if(lower_case || upper_case)
    {
        cout<<c<<" is Vowel"<<endl;
    }
    
    else cout<<c<<" is consonant"<<endl;

    return 0;
}