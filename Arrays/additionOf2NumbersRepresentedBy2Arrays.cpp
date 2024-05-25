// Given two array A[0….n-1] and B[0….m-1] of size n and m respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the number. In above case, answer is 337. 

#include <iostream>
#include<vector>

using namespace std;

vector <int>calc_Sum(vector<int>A, vector<int>B, int m, int n)
{
    int i = m-1;
    int j = n-1;
    int carry = 0;
    vector<int> resArray;
    while (i >= 0 && j >= 0)
    {
        int sum = A[i] + B[j] + carry;
        resArray.insert(resArray.begin(), sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = A[i] + 0 + carry;
        resArray.insert(resArray.begin(), sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }
    while (j >= 0)
    {
        int sum = 0 + B[j] + carry;
        resArray.insert(resArray.begin(), sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }
    if(carry){
        resArray.insert(resArray.begin(), carry);
    }
    while (resArray[0] == 0)
    {
        resArray.erase(resArray.begin());
    }
    
    
return resArray;
}
int main()
{
   vector<int> arr1 = {0, 0, 9, 0, 0, 3, 5};
   vector<int> arr2 = {0, 0, 0, 0, 2, 2, 7};
   vector<int> ans;
   
   ans = calc_Sum(arr1, arr2, arr1.size(), arr2.size());
   
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
   

}