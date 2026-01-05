#include<iostream>
using namespace std;
// int x=120;//Global Variable
// int main()
// {
//     int y=100;
//     cout<<"GlobalVariable  "<<x<<" "
//     <<"Local variable  "<<y;
//     return 0;
// }
// CODE 2
// void func()
// {

//     // This variable is local to func() and 
//     // cannot be accessed outuside this function
//     int y = 18;
// }

// int main()
// {

//     // Accessing variable from func() in main function
//     cout << "Y is: " << y;//WILL GENERATE DECLERATION ERROR

//     return 0;
// }
//CODE 3
int x=10;
int main()
{
    int x=30;
    cout<<"show  "<<x;//Precendece will be given to local variable called variable shadowing
    return 0;
}

