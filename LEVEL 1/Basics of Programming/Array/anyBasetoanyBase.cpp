#include <iostream>
using namespace std;

int main() {
    int n,p=1,base1, base2;
    cin >> n >> base1 >> base2;
    //converting to decimal
    int ans1=0;
    while(n!=0){
        ans1= ans1+ (n%10)*p;
        p*=base1;
        n/=10;
    }
    int ans2=0,q=1,m=ans1;
    while(m!=0){
        ans2 = ans2 + (m % base2)*q;
        q*=10;
        m/=base2;
    }
    cout << ans2;
    return 0;
}
