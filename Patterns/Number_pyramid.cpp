//      Number Half Pyramid
//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    for(int row=1;row<=rows;row++){
        for(int col=1;col<=row;col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }
}
