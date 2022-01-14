//      Hollow Rectangle
//      * * * * *
//      *       *
//      *       *
//      *       *
//      * * * * *

#include <iostream>
using namespace std;
int main() {
    int rows,columns;
    cin>>rows>>columns;
    for(int row=0;row<rows;row++){
        for(int column=0;column<columns;column++){
            if (row==0 || row==rows-1 ||column==0 || column==columns-1)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }
}
