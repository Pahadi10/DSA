#include <iostream>
using namespace std;

int binaryS(int arr[], int start, int end, int key){
    
    if (start > end)
    {
        return -1;        
    }
    
    int mid = start + (end - start)/2;
    if (key == arr[mid])
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binaryS(arr, mid + 1, end, key);
    }
    else
    {
        return binaryS(arr, start, mid - 1, key);
    }
    
}

int main()
{
   int arr[] = {10, 20, 30, 40, 50, 600, 1000};
   int n = sizeof(arr)/sizeof(int);
   int key = 20;
   cout<< binaryS(arr, 0, n, key);
}