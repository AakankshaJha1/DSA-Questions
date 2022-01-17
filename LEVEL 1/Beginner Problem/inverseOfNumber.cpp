//                  Inverse of a number
//The key constraint is if the number is 5 digits long, it'll contain all the digits from 1 to 5 without missing any and without repeating any. 
//e.g. 23415 is a 5 digit long number containing all digits from 1 to 5 without missing and repeating any digit from 1 to 5.Take a look at few other valid numbers - 624135, 81456273 etc.Here are a few invalid numbers - 139, 7421357 etc

//The inverse of a number is defined as the number created by interchanging the face value and index of digits of number.e.g. for 426135 (reading from right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5 and 4 is in place 6), 
//the inverse will be 416253 (reading from right to left, 3 is in place 1, 5 is in place 2,2 is in place 3, 6 is in place 4, 1 is in place 5 and 4 is in place 6) More examples - inverse of 2134 is 1243 and inverse of 24153 is 24153    

#include <iostream>
#include<math.h>
using namespace std;
int inverse(int n) {
   int ip=1,ans=0;
   while(n){
       int id=n%10;
       int op=id;
       int od=ip;
       ans= ans + od*pow(10,op-1);
       ip++;
       n/=10;
   }
   
   return ans;
}

int main() {
    int n;
    cin >> n;
    cout << inverse(n);
    return 0;
}
