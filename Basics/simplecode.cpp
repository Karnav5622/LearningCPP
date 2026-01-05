//Accessing and updating a variable in c
#include<iostream>
using namespace std;
// int main(){
//     int num,x;
//     cout<<"Enter a number\n";
//     cin>>num;
//     cout<<"Enter a number to update\n";
//     cin>>x;
//     num=x;
//     cout<<"Updated number is\n"<<num;
//     return 0;
// }
//Concept of Constant variable
// int main(){
//     const int a=100;
//     cout<<"Enter a number";
//     a=200;//Generate error due to a is constant
//     cout<<a;
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

double addVariables(int a, float b, long c) {
    float sum;
    sum=a+b+c;
    cout<<sum;
    
}
int main(){
    int x;
    float y;
    long z;
    cin >> x>>y>>z;
    addVariables(x,y,z);
}