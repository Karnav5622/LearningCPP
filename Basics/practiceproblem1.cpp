// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d;
//     cout<<"enter";
//     cin>>a>>b>>c>>d;
//     cout<<(a+b)/c+d;
//     return 0;
// }
#include <iostream>
#include<cmath>
using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int r1 = a ^ a;
//     int r2 = c ^~b;
//     int r3 = a & b;
//     int r4 = c | (a ^ a);

//     // perform bitwise operations here
//     cout << r1 << " " << r2 << " " << r3 << " " << r4;


//     return 0;
// }
// Last digit program
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<n%10;
//     return 0;
// }
// int main()
// {
//     int n,fact;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     fact=1;
//     if(n<0) return 0;
//     for(int i=1; i<=n;i++){
//         fact= fact*i;
//     }
    
//     cout<<fact;
    
// }
// int main()
// {
//     int n;
//     if(n>=1&&n<=10000){
//         if(n%2==0){
//             cout<<"true";
//         }
//         else{
//             cout<<"false";
//         }
//     }
//     return 0;
// }
int main()
{
    int sum=0;
    int n;
    cout<<"Enter number";
    cin>> n;
    for(int i=0; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}





