//   Solid Rectangles
//       * * * * *
//       * * * * *
//       * * * * *
//       * * * * *

#include <iostream>
using namespace std;
int main() {
    int rows,columns;
    cin>>rows>>columns;
    for(int row=0;row<rows;row++){
        for(int column=0;column<columns;column++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
