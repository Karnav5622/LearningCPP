//Accessing and updating a variable in c
#include<iostream>
using namespace std;
int main(){
    int num,x;
    cout<<"Enter a number\n";
    cin>>num;
    cout<<"Enter a number to update\n";
    cin>>x;
    num=x;
    cout<<"Updated number is\n"<<num;
    return 0;
}
//Concept of Constant variable
// int main(){
//     const int a=100;
//     cout<<"Enter a number";
//     a=200;//Generate error due to a is constant
//     cout<<a;
//     return 0;
// }
