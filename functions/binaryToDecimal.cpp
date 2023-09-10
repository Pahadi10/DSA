// Write a function to convert binary to decimal 

#include <iostream>
#include <cmath>
using namespace std;

//Division Method
int binToDecDivMethod(int n){
    int res = 0;
    int i = 0;
    while (n)
    {
    int bit = n % 10;
    n = n / 10;
    res = res + bit * pow(2, i++); 
    }
    return res;
}

int main()
{
   int num;
   cout<<"Give the Binary Number: ";
   cin >> num;
   cout<<"Using Division method, Decimal number for "<<num<<" is: "<<binToDecDivMethod(num)<<endl;  

}
 