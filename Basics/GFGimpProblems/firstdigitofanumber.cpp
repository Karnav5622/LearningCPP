#include<iostream>
using namespace std;
int firstnumber(){
    int n;
    cin>>n;
    while(n>=10){
        n=n/10;
    }
    return n;
}
int main()
{
    cout<<firstnumber();
    return 0;
}
