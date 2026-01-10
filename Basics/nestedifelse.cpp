#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     if(n>0){
//         cout<<"Positive";
//         if(n%2==0){
//             cout<<"Even";
//         }
//         else{
//             cout<<"Odd";
//         }
//     }
//     else{
//         cout<<"Negative";
//         if(n%2==0){
//             cout<<"Even";
//         }
//         else{
//             cout<<"Odd";
//         }

        
//     }
// }
// 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0) {
                cout << "True";
            } else {
                cout << "False";
            }
        } else {
            cout << "True";
        }
    } else {
        cout << "False";
    }

    return 0;
}



