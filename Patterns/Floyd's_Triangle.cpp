//      Floyd's Traingle
//      1
//      2 3
//      4 5 6
//      7 8 9 10
//      11 12 13 14 15

#include <iostream>
using namespace std;
int main() {
    int rows,count=1;
    cin>>rows;
    for(int row=1;row<=rows;row++){
        for(int col=1;col<=row;col++){
            cout<<" "<<count++;
        }
        cout<<endl;
    }
    return 0;
}
