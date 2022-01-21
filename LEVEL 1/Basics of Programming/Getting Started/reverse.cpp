//                  Reverse Integer
//Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
#include<climits>
using namespace std;
int reverse(int x) {
        int new_number=0;
        while(x){
            int digit=x%10;
            if((new_number>INT_MAX/10)||(new_number<INT_MIN/10))
                return 0;
            new_number= new_number*10+ digit;
            x/=10;
        }
        return new_number;
    }
int main() {
    int num;
    cin >> num;
    cout << reverse(num);
    return 0;
}
