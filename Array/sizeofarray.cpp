//Basic Program on size of array
#include<iostream>
using namespace std;
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     //IT WILL GIVE ME SIZE OF
//     //TOTAL SIZE OF AN ARRAY IN NUMBER OF BYTES
//     cout<<sizeof(arr);
//     return 0;
// }
int main()
{
    int arr[]={10,20,30,40,50};
    
    //NUMBER OF ELEMENTS IN ARRAY IN NUMBER OF BYTES
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}

