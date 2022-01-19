//              Spiral Traversal
//  1. You are given a number n, representing the number of rows.
//  2. You are given a number m, representing the number of columns.
//  3. You are given n*m numbers, representing elements of 2d array a.
//  4. You are required to traverse and print the contents of the 2d array in form of a spiral.

// Input- 11 12 13 14 15 21 22 23 24 25 31 32 33 34 35
// Output-11 21 31 32 33 34 35 25 15 14 13 12 22 23 24 

#include <iostream>
using namespace std;
void spiralTraversal(int row, int col, int arr[][100]){
    int sr=0,er=row-1,sc=0,ec=col-1;
    while(sr<=er && sc<=ec){
        for(int i =sr;i<=er;i++){
        cout << arr[i][sc] << " ";
        }
        sc++;
        for(int i=sc;i<=ec;i++){
            cout << arr[er][i] << " ";
        }
        er--;
        //to ensure the center part is not repeated twice
        if(sr<er && sc<ec){
            for(int i=er;i>=sr;i--){
                cout << arr[i][ec] << " ";
            }
            ec--;
            for(int i=ec;i>=sc;i--){
                cout << arr[sr][i] << " ";
            }
            sr++;
        }
    }
    return;
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
    spiralTraversal(row,col,arr);
    return 0;
}