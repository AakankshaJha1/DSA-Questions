//      Inverted half Pyramid
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *

#include <iostream>
using namespace std;
int main() {
    int layers;
    cin>>layers;
    for(int layer=layers;layer>0;layer--){
        for(int star=1;star<=layer;star++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
