//              Search an element in a sorted 2D array

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int row,col,key;
    cin >> row >> col;
    vector<vector<int>> arr;
    for(int i=0;i<row;i++){
        vector<int>temp;
        for(int j=0;j<col;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }
    cin >> key;
    for(int i=0; i< row;){
        for(int j=col-1; j>=0;){
            if(arr[i][j] == key){
                cout << i << " " << j<<endl;
                return 0;
            }
            else if(arr[i][j] > key)
                j--;
            else
                i++;
        }
    }
    cout << "Element Not Found";
    return 0;
}
