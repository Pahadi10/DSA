// Divide integers x and y using binary search with k point decimal precision

#include <iostream>
using namespace std;

double divide(int x, int y, int k){
    double ans = 0;
    int start = -(max(abs(x), abs(y)));
    int end = (max(abs(x), abs(y)));

    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if (mid * y <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
            
    }

    double j = 0.1;    
    for (int i = 0; i < k; i++)
    {
        while ((ans + j) * y <= x)
        {
            ans += j;
        }
        j = j/10;
    }
    
    return ans;
}
int main()
{
   int x;
   int y;
   int k;
   cout<<"Give x: "<<endl;
   cin>>x;

   cout<<"Give y: "<<endl;
   cin>>y;
   
   cout<<"Give k: "<<endl;
   cin>>k;

    cout<<"Ans: "<<divide(x, y, k);
}