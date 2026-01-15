#include<iostream>
#include<algorithm>  // for __gcd
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    c = __gcd(a, b);
    cout << "GCD OF " << a << " AND " << b << " IS " << c;
    return 0;
}
    