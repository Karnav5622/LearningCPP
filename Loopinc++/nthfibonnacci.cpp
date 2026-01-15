#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"EnterNumber";
    cin>>n;
    int sum1=0;
    int sum2=1;
    int sum;
    while(n > 1){
        sum=sum1+sum2;
        sum1=sum2;
        sum2=sum;
        n--;
    }
    cout<<sum;
    
    return 0;
}
