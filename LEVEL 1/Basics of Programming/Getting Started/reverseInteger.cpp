//                  Reverse Integer
//You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer

#include <iostream>
using namespace std;
int reverse(int A) {
   int temp=0;
   while(A){
       int digit=A%10;
       A/=10;
       temp=temp*10+digit;
   }
   return temp;
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}
