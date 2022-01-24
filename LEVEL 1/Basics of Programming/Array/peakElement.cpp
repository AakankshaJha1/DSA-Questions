//          Peak Element in Mountain array
//Let's call an array arr a mountain if the following properties hold:
//arr.length >= 3
//There exists some i with 0 < i < arr.length - 1 such that:
//              arr[0] < arr[1] < ... arr[i-1] < arr[i]
//              arr[i] > arr[i+1] > ... > arr[arr.length - 1]
//Given an integer array arr that is guaranteed to be a mountain, return any i such that 
//arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

#include <iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e= arr.size()-1,mid;
        mid= s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << peakIndexInMountainArray(arr);
    return 0;
}
