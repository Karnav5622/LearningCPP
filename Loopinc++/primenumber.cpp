#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=1){
        cout<<"True";
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}
