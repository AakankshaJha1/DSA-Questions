#include <iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max=INT_MIN;
    vector<int> arr;
    int m=n;
    while(m){
        int x;
        cin >> x;
        arr.push_back(x);
        if(x>max)
            max=x;
        m--;
    }
    while(max){
        int i=0;
        while(i<=n){
            if(max==arr[i]){
                cout << " * ";
                arr[i]--;
            }
            else
                cout << "   ";
            i++;
        }
        cout << endl;
        max--;
    }
    return 0;
}
