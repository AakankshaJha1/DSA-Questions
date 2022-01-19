//              GCD and LCM
//You are required to print the Greatest Common Divisor (GCD) of two numbers.
//You are also required to print the Lowest Common Multiple (LCM) of the same numbers.

#include <iostream>
using namespace std;
int gcd(int m, int n){
    while(m%n != 0){
        int remainder=m%n;
        m=n;
        n= remainder;
    }
    return n;
}
int lcm(int m, int n){
    int gcd_= gcd(m,n);
    int lcm_ = (m*n/gcd_);
    return lcm_;
}
int main() {
    int n,m;
    cin >> m>> n;
    cout << gcd(m,n) << endl;
    cout<<lcm(m,n) << endl;
    return 0;
}
