#include <iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&nums){
    int n = nums.size();

for (int i = 1; i < n; i++)
{
    int key = nums[i];
    int j = i - 1;
    
    while (j >= 0 && nums[j] > key)
    {
        nums[j+1] = nums[j];
        j--;
    }
    nums[j + 1] = key;
    
}
}

void printArr(vector<int>arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr = {9, 4, 8, 2, 6, 7};
   cout<<"Array before sorting: ";
   printArr(arr);

   cout<<"Array after sorting: ";
   insertionSort(arr);
   printArr(arr);
}