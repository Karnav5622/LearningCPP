#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter number 1:";
    cin>>n1;
    cout<<"Enter number 2:";
    cin>>n2;
    for(int i=1;i<=10;i++){
        cout<<(n1*i)-(n2*i)<<" ";
    }
    cout<<endl;
    return 0;
}
 