#include <iostream>
using namespace std;
void reverseString(string s){
    if(s.length()==0)
        return;
    reverseString(s.substr(1));
    cout<< s.substr(0,1);
}
int main() {
    string s;
    cin>>s;
    reverseString(s);
    return 0;
}
