// We are given an array and an empty vector, We need to traverse the array and extract out the even numbers and store them in vector

#include <iostream>
#include <vector>

using namespace std;

void sortEven(int arr[], int ind, int size, vector<int> &vec){
    if (ind >= size)
    {
        return;
    }
    if(!(arr[ind] % 2)){
        vec.push_back(arr[ind]);
    }
    sortEven(arr, ind+1, size, vec);
    
}

int main()
{
   int arr[] = {1, 2, 34, 4, 54, 3, 22, 12, 89};
   int size = sizeof(arr)/ sizeof(int);
   int ind = 0;
   vector<int> vec;
   sortEven(arr, ind, size, vec);
   
    for(int i : vec){
        cout << i<< " ";
    }
    
}