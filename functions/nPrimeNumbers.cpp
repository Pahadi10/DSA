// Write a Function to print first N prime numbers

#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int n){
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}
int main()
{
    int n;
    cout<<"Give value of N: ";
    cin>>n;
    cout<<"Prime numbers from 1 to "<<n<<": ";
    printPrime(n);
}