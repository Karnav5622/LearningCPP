#include <iostream>
using namespace std;

// int main() {
//     int arr[] = {3, 7, 2, 9, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int largest = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     cout << "Largest element: " << largest<<endl;
//     return 0;
// }
int main()
{
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    int x;
    for(int i=0;i<size;i++){
        largest=max(largest,arr[i]);

    }
    cout<<"Largest using max "<<largest;

    return 0;
}

    

