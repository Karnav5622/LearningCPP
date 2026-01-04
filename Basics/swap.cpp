//swapping of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"ENTER NUMBER 1 \n";
    cin>> a;
    cout<<"ENTER NUMBER 2 \n";
    cin>> b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped number 1\n"<<a<<"\n";
    cout<<"Swapped number 2\n"<<b;
    return 0;
}