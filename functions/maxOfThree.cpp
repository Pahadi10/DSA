//Write a Function to find maximum of three numbers A, B and C

#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    int maxNumber = a;

    if (b > maxNumber) {
        maxNumber = b;
    }

    if (c > maxNumber) {
        maxNumber = c;
    }

    return maxNumber;
}

int main()
{
    int a, b, c;
    cout<<"Give the numbers A, B and C respectively: ";
    cin >> a >> b >> c;

    cout<<"Maximum of the three numbers is: " << findMax(a, b, c);
}