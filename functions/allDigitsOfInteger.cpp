// Write a function to print all numbers of an integer 

#include <iostream>
using namespace std;

void printNumbers(int n){

    int divisor = 1;
    int temp = n;


    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = n / divisor;
        cout << digit << " ";
        n %= divisor;
        divisor /= 10;
    }
    
    
}

int main()
{
    int n;
    cout<< "Give an integer: ";
    cin >> n;
    cout<< "Printing all numbers of an integer: "<< endl;
    printNumbers(n);
}