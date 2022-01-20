//                      Sub-String 


#include <iostream>
using namespace std;
string permuatations(string s, string ans,int i){
    if(i==s.length()){
        cout<<ans<<endl;
        return ans;
    }
    permuatations(s,ans+s[i],i+1);
    permuatations(s,ans,i+1);
    return ans;
}
int main() {
    string s,ans;
    cin >> s;
    permuatations(s, ans,0);
    cout<<endl;
}
