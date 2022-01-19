//                Minimum Moves to Equal Array Elements
//Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.
//In one move, you can increment n - 1 elements of the array by 1.
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int smallest(vector<int>&nums){
        int small=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<small)
                small=nums[i];
        }
        return small;
    }
int totalSum(vector<int>&nums){
    int sum=0;
    for(int i=0;i< nums.size();i++){
        sum+=nums[i];
    }
    return sum;
    }
int minMoves(vector<int>& nums) {
    int sum= totalSum(nums);
    int small=smallest(nums);
    int steps= sum-(nums.size()*small);
    return steps;
    }
int main() {
    int n;
  	cin>>n;
  	vector<int> arr(n);
  	for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<minMoves(arr);
    return 0;
}
