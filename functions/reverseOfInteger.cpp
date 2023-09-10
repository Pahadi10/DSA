// Create a function to reverse a integer 

#include <iostream>
using namespace std;

int reverseInt(int n){
   int temp = 0;
   while(n){
      temp = temp * 10 + (n % 10);
      n = n / 10;
   }
   return temp;
}


int main()
{
   int n;
   cout<<"Give an integer to reverse it: ";
   cin>>n;

   cout<<"Reverse of the integer "<<n<<" is: "<< reverseInt(n);
}