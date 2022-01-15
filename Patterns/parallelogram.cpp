//      Parallelogram Pattern
//              * * * * *
//            * * * * *
//          * * * * *
//        * * * * *
//      * * * * *

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    for(int row=1;row<=rows;row++){
        for(int space=1;space<=(rows-row);space++)
            cout<<"   ";
        for(int star=1;star<=rows;star++)
            cout<<" * ";
        cout<<endl;
    }
    return 0;
}
