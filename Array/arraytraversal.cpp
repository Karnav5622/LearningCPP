#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Normal for loop
    int arr1[5] = {234, 23324, 324, 123, 123};
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    // Range-based for loop
    int arr2[] = {10, 40, 30, 45};
    for (int x : arr2) {
        cout << x << " ";
    }

    return 0;
}

