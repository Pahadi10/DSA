#include <iostream>
using namespace std;

//Method-1 
// Naive Method

//T.c - O(n)
int slowExponentiation(int x, int y){
    long long int ans = x;
    for (int i = 2; i <= y; i++)
    {
        ans *= x;
    }
    return ans;
}


//Method-2 
// Fast Exponentiation method

// T.C. - O(log y)
int fastExponentiation(int x, int y){
    long long int ans = 1;

    while (y > 0)
    {
        if (y & 1)
        {
            // y is odd.
            ans = (ans * x);
        }
        x = (x * x);
        y >>= 1;
    }
    return ans;
}

int main()
{
   int x = 3;
   int y = 3;

   cout<<slowExponentiation(x, y)<<endl;
   cout<<fastExponentiation(x, y)<<endl;
}