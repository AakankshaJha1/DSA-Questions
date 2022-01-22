#include <iostream>
using namespace std;

int main() {
    int n,p=1,base;
    cin >> n >> base;
    int ans=0;
    while(n!=0){
        ans= ans+ (n%base)*p;
        cout << ans << " ";
        n/=base;
        p*=10;
    }
    cout << ans;
    return 0;
}
