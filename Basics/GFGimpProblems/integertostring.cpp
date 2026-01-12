#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    string s=to_string(n);
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        cout<<s[i]<<" ";
    }
    return 0;
}

