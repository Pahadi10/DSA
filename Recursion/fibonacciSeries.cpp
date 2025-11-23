// Given a number n, print n-th Fibonacci Number. 
// The Fibonacci numbers are the numbers in the following integer sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……

// Input  : n = 1
// Output : 1

// Input  : n = 9
// Output : 34

// Input  : n = 10
// Output : 55


#include <iostream>
using namespace std;

int fibonacci(int n){

    if (n <= 1)
    {
        return n;
    }

    return (fibonacci(n-1) + fibonacci(n-2));
    
}

int main()
{
    int n;
    cout<<"Give value of n: "<<endl;
    cin>>n;

    cout<<fibonacci(n);
}