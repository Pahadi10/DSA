// Write a Function to print Sum of first N numbers

#include <iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    //Using formula of first N natural numbers
    //ans = (n*(n+1)) / 2;


    //Using For loop
    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
    }
    
    return ans;
}


int main()
{
    int n;
    cout<<"Give value N to find sum of first N numbers: ";
    cin>>n;

    cout<<"Sum of first "<<n<<" numbers is: "<<sum(n);
}