// Find the minimum number in an array using recursion

#include <iostream>
using namespace std;

int findMinimum(int arr[], int size, int ind, int mini){
    if(ind >= size){
        return mini;
    }
    mini = min(mini, arr[ind]);
    return findMinimum(arr, size, ind + 1, mini);

}

int main()
{
   int arr[] = {12, 234, 43, 2, 54, 4, 10};
   int size = sizeof(arr)/sizeof(int);
   int ind = 0; 
   int mini = INT_MAX;
   cout << findMinimum(arr, size, ind, mini);
}