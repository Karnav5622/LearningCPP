// SWAP 0 WITH 5 INSIDE A NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    string s=to_string(n);
    for (int i = 0; i < s.length(); i++) {
        if(s[i]=='0'){
            s[i]='5';
        }
    }
    cout<<stoi(s);
    return 0;
}
