//      Number Pyramid Pattern
//          1
//         2 2
//        3 3 3
//       4 4 4 4
//      5 5 5 5 5

#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
        for(int row=1;row<=rows;row++){
            for(int space=1;space<=(rows-row);space++)
                cout<<"  ";
            for(int print=1;print<=row;print++)
                cout<<" "<<row<<" ";
            cout<<endl;
        }
    return 0;
}
