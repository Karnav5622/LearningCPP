#include<iostream>
using namespace std;
// int main()
// {
//     int x=10,y;
//     y=x++;//First y=x then x=x+1
//     cout<<"Output is"<<" "<<x<<" "<<y;
//     return 0;
// }
int main()
{
    int x=10,y;
    y=++x;//First x=x+1 then x=y
    cout<<"Output is"<<" "<<x<<" "<<y;
    return 0;
}
