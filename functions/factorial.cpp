// Write a Function to print factorial of a number

#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans = ans* i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Give the number to find factorial";
    cin >> n;
    cout << "The factorial of " << n << " is " << fact(n);
}