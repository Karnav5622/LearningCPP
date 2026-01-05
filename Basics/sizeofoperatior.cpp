#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<"\n"<<sizeof(char)
    <<"\n"<<sizeof(float)<<"\n"<<sizeof(double)
    <<"\n"<<sizeof(long long);
}
int main() {
    int x = 2;
    double y = 3.5;
    char z = 'g';
    int a,b,c;

    // store the size of the variables into a, b, c variables;

    // printing the size of the variable x.
    cout << sizeof(x)<< " " << b<<sizeof(y) << " " << c<<sizeof(z) << endl;
    return 0;
}