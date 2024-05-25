// find square root of integer n using binary search with k decimal point precision

#include <iostream>

using namespace std;

double findRoot(int n, int k)
{
    int start = 0;
    int end = n;
    double ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    float j = 0.1;
    for (int i = 0; i < k; i++)
    {
        while ((ans + j) * (ans + j) <= n)
        {
            ans += j;
        }
        j = j/10;
    }

    return ans;
}
int main()
{
    int n;
    int k;
    cout<<"Give number to find square root: "<<endl;
    cin>>n;
    
    cout<<"Give precision point: "<<endl;
    cin>>k;

    cout<<findRoot(n, k);
}