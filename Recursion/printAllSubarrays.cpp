//Print all the suba rrays of an array using the recursion

#include <iostream>
using namespace std;

void solve(int *arr, int &start, int &end, int n){

   if (end >= n)
   {
      return;
   }
   
   for (int i = start; i <= end; i++)
   {
      cout<< arr[i]<<" ";
   }
   cout<<endl;

   solve(arr, start, ++ end, n);

}

void printSubArrays(int *arr, int n){
   

   for (int start = 0; start < n; start++)
   {
      int end = start;

      solve(arr, start, end, n);
   }
   
}

int main()
{
   int arr[] = {2, 4, 5, 6, 7};
   int n = 5;

   printSubArrays(arr, n);
}