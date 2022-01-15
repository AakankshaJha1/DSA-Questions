//      Butterfly Pattern
//      *             *
//      * *         * *
//      * * *     * * *
//      * * * * * * * *
//      * * *     * * *
//      * *         * *
//      *             *

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    //Upper-part of butterfly
    for (int row=1;row<=rows;row++){
        for(int fstar=1;fstar<=row;fstar++)
           cout<<" * ";
        for(int space=1;space<=2*(rows-row);space++)
            cout<<"   ";
        for(int fstar=1;fstar<=row;fstar++)
           cout<<" * ";
        cout<<endl;
    }
    //Lower-part of butterfly
    for(int row=rows-1;row>0;row--){
        for(int fstar=1;fstar<=row;fstar++)
            cout<<" * ";
        for(int space=1;space<=2*(rows-row);space++)
            cout<<"   ";
        for(int fstar=1;fstar<=row;fstar++)
           cout<<" * ";
        cout<<endl;
    }
    return 0;
}
