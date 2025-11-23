// Tell if an array is sorted or not 

#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size,  int ind){
    
//base case
    if(ind >= size){
        return true;
    }

//processing
    if (arr[ind] >= arr[ind - 1])
    {
        // aage check karo (recursion)
        return checkSorted(arr, size, ind + 1);

    }
    else
    {
        //Not sorted
        return false;
    }
    

}

int main()
{
   int arr[] = {2, 4, 6, 8, 12};
   int size = sizeof(arr)/ sizeof(int);
   int ind = 1;
   cout << checkSorted(arr, size, ind);
}















