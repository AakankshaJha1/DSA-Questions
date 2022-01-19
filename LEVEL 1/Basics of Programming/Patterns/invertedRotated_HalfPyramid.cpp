//      Inverted Rotated Half Pyramid
//              *
//            * *
//          * * *
//        * * * *
//      * * * * *

#include <iostream>
using namespace std;
int main() {
    int layers;
    cin>>layers;
    for(int layer=1;layer<=layers;layer++){
        for(int space=1;space<=(layers-layer);space++)
            cout<<"   ";
        for(int star=1;star<=layer;star++)
            cout<<" * ";
        cout<<endl;
    }
    return 0;
}
