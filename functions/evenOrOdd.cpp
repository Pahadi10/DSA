// Write a fuction to check a number is even or odd

#include <iostream>
using namespace std;

void evenOrOdd(int n){
    if (n % 2 == 0)
    {
        cout<<n<<" is an even number";
    }
    else
    {
        cout<<n<<" is an odd number";
    }
    cout<<endl;
}

//Bit Methpd

void evenOrOddBit(int n){
    if ((n& 1) == 0)
    {
        cout<<n<<" is an even number";
    }
    else
    {
        cout<<n<<" is an odd number";
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cout<<"Give number to check Even or Odd: ";
    cin >> n;

    evenOrOdd(n);
    evenOrOddBit(n);
}