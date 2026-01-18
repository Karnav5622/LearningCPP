#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     int &q = 5;
//     cout<<q;
//     return 0;
// }
int reversedigit(int a){
    int temp=a;
    int rev=0,lastdigit;
    while(temp!=0){
        lastdigit=temp%10;
        rev=rev*10+lastdigit;
        temp=temp/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"Reversed number: "<<reversedigit(n)<<endl;
    return 0;
}
