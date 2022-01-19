//                  Rotate by 90 degree(Clockwise)
//  1. You are given a number n, representing the number of rows and number of columns.
// 2. You are given n*n numbers, representing elements of 2d array a.
// 3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
// Input- 11 12 13 14                       Output-41 31 21 11 
//        21 22 23 24                              42 32 22 12 
//        31 32 33 34                              43 33 23 13 
//        41 42 43 44                              44 34 24 14       

#include <iostream>
using namespace std;
void rotate(int  n, int arr[][100]){
    //reversing the columns
    int sr=0,er=n-1;
    while(sr<er){
        for(int i=0;i<n;i++){
            int temp=arr[sr][i];
            arr[sr][i]=arr[er][i];
            arr[er][i]=temp;
        }
        sr++;
        er--;
    }
    //taking transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rotate(n, arr);
}
