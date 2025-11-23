// Double the elements of an array
// example 1: 
// input:
// arr[] = {12, 20, 30, 40, 50, 60, 70, 80}

// output:
// arr[] = {24, 40, 60, 80, 100, 120, 140, 160}

#include <iostream>
using namespace std;

void doub(int arr[], int size, int ind){
    if (ind >= size)
    {
        return;
    }
    arr[ind] *= 2 ;
    doub(arr, size, ind + 1);
}

int main()
{
   int arr[] = {12, 20, 30, 40, 50, 60, 70, 80};
   int size = sizeof(arr)/ sizeof(int);
   int ind = 0;

   doub(arr, size, ind);
   for (int i : arr)
   {
    cout<< i << " ";
   }
   
}