//                  The Curious Case of Benjamin Bulbs
//You are given n number of bulbs. They are all switched off. A weird fluctuation in voltage hits the circuit n times. 
//In the 1st fluctuation, all bulbs are toggled, in the 2nd fluctuation every 2nd bulb is toggled, in the 3rd fluctuation, every 3rd bulb is toggled, and so on. 
//You've to find which bulbs will be switched on after n fluctuations.

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    //only perfect squares have odd number of factors
    //non prime numbers occur in pairs like for 12: (1,12),(2,6),(3,4)
    for(int i=2;(i*i)<=n;i++){
        cout<< (i*i) << " ";
    }
    return 0;
}
