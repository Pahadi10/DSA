// Find the maximum number in an array using recursion

#include <iostream>
using namespace std;

int findMaximum(int arr[], int size, int ind, int maxi){
    if(ind >= size){
        return maxi;
    }
    maxi = max(maxi, arr[ind]);
    return findMaximum(arr, size, ind + 1, maxi);

}

int main()
{
   int arr[] = {12, 234, 43, 2, 54, 4, 10};
   int size = sizeof(arr)/sizeof(int);
   int ind = 0;
   int maxi = INT_MIN;
   cout << findMaximum(arr, size, ind, maxi);
}