#include <iostream>
//                      Broken Economy
//In a country of novice government, the economic system is changed where only coins are used that too of various denominations. 
//Whenever a foreigner visits this country, they visit a money exchanger to get the currency of the same country. 
//As the foreigner is unaware of the denomination of the country, the money exchange prefers to tell them the denomination which is the nearest maximum and nearest minimum to the denomination mentioned by the foreigner. 
//In case they get the correct guess of the denomination, they are told the same denomination. The denominations are always quoted in ascending order.

//Example-In a country, 8 given denominations are as follows
//[5, 10, 15, 22, 33, 40, 42, 55]
//The foreigner asks for denomination 25.
//The money exchange tells them that denominations of 33 and 22 are available.

#include<vector>
using namespace std;
int main() {
    int n,d;
    cin >> n;
    vector<int> arr;
    int i=0;
    while(i<n){
        int x;
        cin >> x;
        arr.push_back(x);
        i++;
    }
    cin >> d;
    int floor=0,ifloor=-1,ceil=0;
    i=0;
    while(i<n){
        cout << floor <<endl;
        if(arr[i]<d){
            floor=arr[i];
            ifloor=i;

        }
        else if(arr[i]==d){
            cout << "Denomination told is" << d;
            return 0;
        }
        else{
            break;
        }
        i++;
    }
    ceil= arr[i];
    cout << "Ceil value is" << ceil << endl;
    cout << "Floor value is" << floor;
    return 0;
}
