// Write a Function to check if a number is prime or not?

#include <iostream>
using namespace std;

bool primeNumber(int n){
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Give number to check for prime number: ";
    cin >> n;
    if (primeNumber(n))
    {
        cout<<n<<" is a Prime Number";
    }
    else
    {
        cout<<n<<" is not a Prime Number";
    }
    
}