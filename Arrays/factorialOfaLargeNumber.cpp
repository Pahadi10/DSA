// Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int>factorial(int x)
{
    vector<int> resArray;
    resArray.push_back(1);
    int carry = 0;

    for (int i = 2; i <= x; i++)
    { 
        for (int j = 0; j < resArray.size(); j++)
        {
            int temp = i * resArray[j] + carry;
            resArray[j] = temp% 10;
            carry = temp / 10;
        }
        while (carry)
        {
            resArray.push_back(carry%10);
            carry /= 10;
        }        
        
    }
    reverse(resArray.begin(), resArray.end());
          
return resArray;
}
int main()
{
   vector<int> ans;
   
   ans = factorial(50);
   
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
   

} 