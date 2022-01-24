
#include <iostream>
#include<vector>
using namespace std;
int sqrtN(long long int N)
{
    // Write your code here.
    int s=0;
    int e=N;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    if(N==1)
        return 1;
    while(s<=e){
        long long int square = mid* mid;
        if(square <N){
            ans= mid;
            s=mid+1;
        }
        else if(square==N){
            return mid;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    sqrtN(n);
    return 0;
}
