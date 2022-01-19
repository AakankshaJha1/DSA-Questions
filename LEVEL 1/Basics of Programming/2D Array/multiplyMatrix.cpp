//          Matrix Multiplication

#include <iostream>
using namespace std;
void matrixMultiply(int arr1[100][100],int row1,int col1, int arr2[100][100], int row2, int col2){
    int **answer=0;
    answer = new int*[100];
    for(int i=0;i<100;i++)
    answer[i] = new int[100];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            answer[i][j] = 0;
            for(int k=0;k<row2;k++){
                answer[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
      for(int i=0;i<row1;i++){
        for(int j=0 ;j< col2; j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main() {
    int row1,col1,row2,col2;
    cin >> row1 >> col1;
    int arr1[100][100];
    for(int i=0;i<row1;i++){
        for(int j=0 ;j< col1; j++){
            cin>>arr1[i][j];
        }
    }
    cin >> row2 >> col2;
    int arr2[100][100];
    for(int i=0;i<row2;i++){
        for(int j=0 ;j< col2; j++){
            cin>>arr2[i][j];
        }
    }
    if(row2!=col1){
        cout << "Matrix Multiplication is not possible";
        return 0;
    }
    matrixMultiply(arr1,row1,col1,arr2,row2,col2);
  
    return 0;
}
