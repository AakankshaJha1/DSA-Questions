#include <iostream>
using namespace std;
void subsequence(string s, string ans, int i){
    if(i==s.length()){
        cout << ans << " ";
        return;
    }
    //NOT adding s[i] to answer 
    subsequence(s,ans,i+1);
    //adding s[i] to answer
    subsequence(s,ans+s[i],i+1);
}
int main() {
    string s;
    cin >>  s;
    subsequence(s," ",0);
}
