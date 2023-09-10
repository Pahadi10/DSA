// Write a function to convert decimal to binary

#include <iostream>
#include <cmath>
using namespace std;

// Division Method

int decToBinDivMethod(int n)
{
    int res = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n % 2;
        n = n/2;
        res = bit * pow(10, i++) + res;
    }
    return res;
}

// Bit Right shift method

int decToBinBitMethod(int n){
    
    int res = 0;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        n = n >> 1;
        res = bit * pow(10, i++) + res;
    }
    return res;
}

int main()
{
    int num;
    cout<<"Give Decimal Numer: ";
    cin >> num;
    cout <<"Binary of "<<num<<" using Division Method: "<< decToBinDivMethod(num)<<endl;
    cout <<"Binary of "<<num<<" using Bit Manipulation Method: "<< decToBinBitMethod(num)<<endl;
}