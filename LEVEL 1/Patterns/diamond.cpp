//      Diamond Pattern
//          *
//        * * *
//      * * * * *
//        * * *
//          *

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
        for(int row=1;row<=rows;row++){
            //upper half
            for(int space=1;space<=2*(rows-row);space++)
                cout<<" ";
            for(int star=1;star<=(2*row-1);star++)
                cout<<" *";
            cout<<endl; 
        }
        for(int row=rows-1;row>0;row--){
            //lower half
            for(int space=1;space<=2*(rows-row);space++)
                cout<<" ";
            for(int star=1;star<=(2*row-1);star++)
                cout<<" *";
            cout<<endl; 
        }
    return 0;
}
