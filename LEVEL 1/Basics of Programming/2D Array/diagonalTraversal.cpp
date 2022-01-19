//             State of Wakanda(Diagonal Traversal)
//The visitor only plans to visit the upper diagonal triangle of the monument list.
// The visitor travels diagonally till there are no more moves left in the current journey. 
// He then visits the adjacent monument to the first monument of current diagonal journey. 
// He continues the same path till all the monuments of the upper half have been travelled.
//Input 1    2    3    4
//      5    6    7    8
//      9    10   11   12
//      13   14   15   16
// Output-  1->6->11->16->2->7->12->3->8->4

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }
    for(int i=0;i<n;i++)   {
        int k=i;
        for(int j=0;j<n-i;j++){
            cout<<arr[j][k]<< " --> ";
            k++;
        }
    }
    cout << "End";
    return 0;
}
