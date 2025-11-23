//Return true or false on the basis of an element present in the array or not

#include <iostream>
using namespace std;

bool searchArray(int arr[], int ind, int size, int key){

    if (ind >= size)
    {
        return false;
    }
    if (arr[ind] == key)
    {
        return true;
    }
    int ans = searchArray(arr, ind+1, size, key);
    
    return ans;
    
    
}

int main()
{
   int arr[] = { 2, 4,5, 6, 67, 54};
   int ind = 0;
   int size = sizeof(arr)/sizeof(int);
   int key = 67;
   cout << searchArray(arr, ind, size, key);
}