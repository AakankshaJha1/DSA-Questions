//                Minimum Moves to Equal Array Elements-2
//Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.
//In one move, you can increment or decrement an element of the array by 1
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minMoves2(vector<int>& nums) {
        int steps=0;
        sort(nums.begin(), nums.end());
        int mid=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++){
            steps+=(abs((mid-nums[i])));
        }
        return steps;
    }
int main() {
    int n;
  	cin>>n;
  	vector<int> arr(n);
  	for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<minMoves2(arr);
    return 0;
}
