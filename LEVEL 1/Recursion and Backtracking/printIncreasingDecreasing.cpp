#include <iostream>
using namespace std;
void printIncreasing(int n){
    if(n==0){
        return;
    }
    printIncreasing(n-1);
    cout << n << " ";
    return;
}
void printDecreasing(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printIncreasing(n-1);
    return;
}

int main() {
    int n;
    cin >> n;
    printIncreasing(n);
    printDecreasing(n);
    return 0;
}
