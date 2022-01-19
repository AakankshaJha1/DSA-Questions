//              Exit point of a matrix
// You are given a number n, representing the number of rows.
// You are given a number m, representing the number of columns.
// You are given n*m numbers (1's and 0's), representing elements of 2d array a.
// Consider this array a maze and a player enters from top-left corner in east direction.
// The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
// You are required to print the indices in (row, col) format of the point from where you exit the matrix.

#include <iostream>
using namespace std;

const int mr = 100, mc = 100;

int** input(int** mat, int n, int m)
{
  mat = new int* [n];
  for (int i = 0; i < n; i++)
  {
    int* arr = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> arr[j];
    }
    mat[i] = arr;
  }
  return mat;
}

void exitPoint(int** mat, int n, int m)
{
  // align ==0 means moving horizontally
  // align ==1 means moving vertically
  char direction='r';
  int align=0; //0=right,1=down,2=left,3=up
  int i=0,j=0,xans=0,yans=0;
  while(true){
      align= (align +mat[i][j])%4;
        if(align==0)
            j++;
        else if(align==1)
            i++;
        else if(align==2)
            j--;
        else
            i--;


        if(i<0){
            i++;
            break;
        }
        else if(i==n){
            i--;
            break;
        }
        else if(j<0){
            j++;
            break;
        }
        else if(j==m){
            j--;
            break;
        }
  }
    cout << i << endl;
    cout << j;
    return;
}

int main(int argc, char** argv)
{
  int n, m;
  cin >> n >> m;
  int** mat = input(mat, n, m);

  exitPoint(mat,n,m);
  
  return 0;
}