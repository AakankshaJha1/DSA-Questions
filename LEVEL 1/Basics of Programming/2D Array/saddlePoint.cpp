//              Saddle Point
//The saddle point is defined as the least element in the row but the maximum element in the column of the matrix.

#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int row,col;
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
    int min=INT_MAX,max;
    for(int i=0;i<row;i++){
        int ysp=0;
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                ysp=j;
            }
        }
        max=min;
        bool flag=false;
        for(int k=0;k<row;k++){
            if(arr[k][ysp]>max){
                max=arr[k][ysp];
                flag=true;
            }
        }
        if(flag){
            cout << max << endl;
            return 0;
        }
    }
    return 0;
}
