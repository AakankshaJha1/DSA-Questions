//              Permutations of a string
//  Input- abc
//  Output-abc acb bac bca cba cab
#include <iostream>
using namespace std;
void getPermutate(string s, int left, int right){
    if(left==right)
    {
        cout << s << endl;
        return;
    }
    for(int i=left;i<=right;i++){
        swap(s[i],s[left]);
        getPermutate(s,left+1,right);
        swap(s[i],s[left]);        //backtracking
    }
    return;
}
int main() {
    string s;
    cin >>  s;
    getPermutate(s,0,s.length()-1);
    return 0;
}
