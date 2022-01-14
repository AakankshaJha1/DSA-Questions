//      Inverted number Pyramid
//      1 2 3 4
//      1 2 3
//      1 2
//      1

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    for(int row=rows;row>0;row--){
        for(int col=1;col<=row;col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }
}
