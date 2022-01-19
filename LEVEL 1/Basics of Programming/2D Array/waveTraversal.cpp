//                  The state of Wakanda(Spiral Traversal)
//The route of the monument is fixed and expressed in a 2-d matrix where the travelers visit the prescribed next monument. For example
//1  2  3
//4  5  6
//7  8  9
//is the prescribed route and the visitors travels this path: 1->2->3->4->5->6->7->8->9

//However, a certain visitor decides to travel a different path as follows: 
//  1. He first travels southwards till no further south places are available.
//  2. He then moves only 1 place eastwards.
//  3. He starts to move again towards north till any further north moves are available. 
//This continues till all the places are covered. 

#include <iostream>
using namespace std;
void findThePath(int row, int col ,int arr[][100]){
    int temp = 0;
    while(temp<col){
        for(int i=0;i<row;i++){
            cout << arr[i][temp] << " --> ";
        }
        temp++;
        for(int i=row-1;i>=0;i--){
            cout << arr[i][temp] << " --> ";
        }
        temp++;
    }
    cout << "End";
    return ;
}
int main() {
    int row,col;
    cin >> row >> col;
    int arr[row][100];
    for(int i=0;i<row;i++){
        for(int j=0 ;j< col; j++){
            cin>>arr[i][j];
        }
    }
    findThePath(row,col,arr);
    return 0;
}
