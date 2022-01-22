#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int main() {
    int n,i=0,k,l,r;
    cin >> n;
    vector<int> arr;
    while(i<n){
        int x;
        cin >> x;
        arr.push_back(x);
        i++;
    }
    cin >> k; //number of rotations
    if(k<0){
        k+=n;
    }
    if(k>n){
        k=k%n;
    }
    //swapArray(arr,0,k-1)
    l=0;
    r=k-2;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    //swapArray(arr,k,n-1)
    l=k-1;
    r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    l=0;
    r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}
