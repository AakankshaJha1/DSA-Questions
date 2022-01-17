//                  Prime Factorisation of a Number

#include <iostream>
#include<vector>
using namespace std;
vector<int> primeFactors(int n){
    vector<int> ans;
    for(int div = 2 ; (div*div) <= n; div++){
        while(n % div == 0){
            ans.push_back(div);
            n/=div;
        }
    }
    if(n!=1)
        ans.push_back(n);
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> ans = primeFactors(n);
    for(int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
    return 0;
}
