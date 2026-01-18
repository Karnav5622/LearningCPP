#include<iostream>
using namespace std;

int main() {
    int x = 10;
    cout << &x << '\n';    // Print the address of x
    cout << *(&x) << '\n';  // Print the value at the address of x
    return 0;
}