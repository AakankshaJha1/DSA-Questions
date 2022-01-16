//                               Find unique
//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.

#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int num_xor=0;
    for(int i=0;i<size;i++){
        num_xor=num_xor xor arr[i];
    }
    return num_xor;
}
int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout<< findUnique(arr,size);
    return 0;
}
