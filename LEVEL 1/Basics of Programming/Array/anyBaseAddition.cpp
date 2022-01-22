#include <iostream>
using namespace std;

int main() {
    int n1,n2, base,ans=0,carry,p=1;
    cin  >> base >> n1 >>n2;
    while((n1!=0) || (n2!=0)){
        int a = n1 % 10;
        int b = n2 % 10;
        ans = ans +((a + b + carry)%base)*p;
        carry= (carry+a+b)/base;
        p*=10;
        n1/=10;
        n2/=10;
    }
    while(carry){
        ans = ans + (carry%base)*p;
        carry= carry/base;
        p*=10;  
    }
    cout << ans;
    return 0;
}
