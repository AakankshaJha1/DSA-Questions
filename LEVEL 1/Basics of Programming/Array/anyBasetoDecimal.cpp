#include <iostream>
using namespace std;

int main() {
    int n,p=1,base;
    cin >> n >> base;
    int ans=0;
    while(n!=0){
        ans= ans+ (n%10)*p;
        p*=base;
        n/=10;
    }
    cout << ans;
    return 0;
}
