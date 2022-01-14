//      Half Pyramid
//      *
//      * *
//      * * *
//      * * * *
//      * * * * *

#include <iostream>
using namespace std;
int main() {
    int layers;
    cin>>layers;
    for(int layer=1;layer<=layers;layer++){
        for(int star=1;star<=layer;star++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
