//                      String Compression


#include <iostream>
using namespace std;
int main() {
    string s,ans1;
    cin >> s;
    //Compression type1
    cout << "Compression type 2" << endl;
    cout<<s[0];
    for(int i=1;i<s.length();i++){
        char curr=s[i];
        char prev=s[i-1];
        if(curr!=prev){
            cout<<s[i];
        }
    }
    
    //Compression type 2
    cout << endl << "Compression type 2" << endl;
    int freq=1;
    cout<<s[0];
    for(int i=1;i<s.length();i++){
        char curr=s[i];
        char prev=s[i-1];
        if(curr!=prev){
            cout << freq << s[i];
            freq=0;
        }
        freq++;
    }
    cout<<freq;
    return 0;
}
