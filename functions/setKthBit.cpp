// Write a function to set K th bit of a number

#include <iostream>
#include <cmath>
using namespace std;

int setBit(int n, int k){

   if (k < 0 || k > 31) {
      cout << "Invalid bit position. Bit position should be between 0 and 31." << endl;
      return n;
   }

   int bits = 1 << k;
   int res = n | bits;
   return res;
}
int main()
{
   int number;
   int k;
   cout<<"Give number to set Kth bit: ";
   cin>>number;
   cout<<"Give number to set Kth bit: ";
   cin>>k;

   cout<<"Number after setting up Kth bit: "<<setBit(number, k);
 
}