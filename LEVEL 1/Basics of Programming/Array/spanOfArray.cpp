#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max=INT_MIN, min=INT_MAX;
    while(n){
        int x;
        cin >> x;
        if(x>max)
            max=x;
        if(x<min)
            min=x;
        n--;
    }
    cout << (max-min);
    return 0;
}
