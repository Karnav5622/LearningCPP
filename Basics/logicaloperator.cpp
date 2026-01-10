#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age"<<endl;
    cin>>age;
    bool isStudent= true;
    if(age>=18&& age<=25&& isStudent){
        cout<<"Student";
    }
    else{
        cout<<"Not Student";
    }
    return 0;
}
