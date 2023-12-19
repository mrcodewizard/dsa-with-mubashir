/*  Given two numbers M and N. The task is to find the position 
    of the rightmost different bit in the binary representation of
    numbers. If both M and N are the same then return -1 in this case. 
*/


#include <iostream>
using namespace std;

int posOfRightMostDiffBit(int m, int n) {
    int M = 0;
    int N = 0;
    int i = 0;
    
    if(m == n) {
        return -1;
    } 
    
    else {
        while(m && n) {
          M = m% 2;
          N = n% 2;
          n = n / 2;
          m = m / 2;
          if(M != N ) {
              return i;
          }
          i++;
        }
        return i;
    }
}



int main() {
   int a, b; 
   int different_bit;

   cout<<"Enter two numbers" <<endl;

   cout<<"1st number:";
   cin>>a;

   cout<<"2nd number:";
   cin>>b;

   different_bit = posOfRightMostDiffBit(a,b);
   cout<< "First different bit is at position: " << different_bit <<endl;

   return 0;
}

