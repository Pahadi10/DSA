// Write a Function to print sum of first N even numbers

#include <iostream>
using namespace std;

int sum(int n){
    int ans = 0;

    for (int i = 2; i <= n; i+=2)
    {
        ans = ans + i;
    }
    
    return ans;
}

int main()
{
    int n;
    cout<<"Give value N to find sum of first N even numbers: ";
    cin>>n;

    cout<<"Sum of first "<<n<<" even numbers is: "<<sum(n);
}