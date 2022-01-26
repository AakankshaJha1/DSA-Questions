#include <iostream>
using namespace std;
int power(int n, int pow){
    if(pow==0){
        return 1;
    }
    int temp =  power(n, pow / 2);
    // for even powers, calculate power of half and then take its square.
    if(pow%2==0){
        return temp* temp;
    }
    // for odd power, divide as odd power= 1+ even power;
    else{
        return n* temp* temp;
    }
}
int main() {
    int n, pow;
    cin >> n >> pow;
    cout << power(n,pow);
    return 0;
}
