#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int main() {
    int n1, n2;
    vector<int> arr1={0}, arr2={0},ans={0};
    cin >>n1;
    int j=n1;
    while(j){
        int x;
        cin >> x;
        arr1.push_back(x);
        j--;
    }
    cin >>n2;
    j=n2;
    while(j){
        int x;
        cin >> x;
        arr2.push_back(x);
        j--;
    }
    while(n1 && n2){
        int sum = arr1[n1]+arr2[n2];
        ans.push_back(sum);
        n1--;
        n2--;
    }
    while(n1){
        int sum = arr1[n1];
        ans.push_back(sum);
        n1--;
    }
    while(n2){
        int sum = arr2[n2];
        ans.push_back(sum);
        n2--;
    }
     //printing answer
    for(auto i=ans.size()-1;i>0;i--){
        cout << ans[i] << " ";
    }
    return 0;
}
