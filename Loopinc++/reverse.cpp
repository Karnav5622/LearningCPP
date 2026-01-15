#include<iostream>
using namespace std;
int main()
{
    int a;
    int rev=0;
    int temp;
    cout<<"ENter"<<endl;
    cin>>a;
    temp=a;
    while(temp!=0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    cout<<rev;
    return 0;
}
