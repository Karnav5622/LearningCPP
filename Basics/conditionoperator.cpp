#include <iostream>
using namespace std;
int main() {

    int a = 12, b = 15, c;
    // Ternary operator:
    // If (a > b) is true, assign a to c
    // Otherwise, assign b to c
    c = (a > b) ? a : b;
    cout << c;

    return 0;
}