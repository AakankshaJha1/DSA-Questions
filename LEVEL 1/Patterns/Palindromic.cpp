//      Palindromic Pattern
//              1
//            2 1 2
//          3 2 1 2 3
//        4 3 2 1 2 3 4
//      5 4 3 2 1 2 3 4 5

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
        for(int row=1;row<=rows;row++){
            //space
            for(int space=1;space<=2*(rows-row);space++)
                cout<<" ";
            //number series decreasing
            for(int dec=row;dec>0;dec--)
                cout<<" "<<dec;
            //number series increasing
            for(int inc=2;inc<=row;inc++)
                cout<<" "<<inc;
            cout<<endl;
        }
    return 0;
}
