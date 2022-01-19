//              Rotate a number
//You are given two numbers n and k. You are required to rotate n, k times to the right. 
//If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. 
//Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.

#include <iostream>
using namespace std;
int rotate(int n, int k){
    int digits=0,temp=n;
    while(temp){
        digits++;
        temp/=10;
    }
    //for large value of k
    k = k % digits;
    //for negative value of k
    if(k<0)
        k = k + digits;
    int div=1,mul=1;
    for(int i=0;i<digits;i++){
        if(i<k){
            div*=10;
        }
        else
            mul*=10;
    }
    int q = n/div;
    int r = n%div;
    int rotated_no = r*mul + q; 
    return rotated_no;
}
int main() {
    int n,k;
    cin >> n >> k;
    cout << rotate(n,k);
    return 0;
}
