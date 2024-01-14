#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>&nums)
{
    
    int n = nums.size();
    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
                cout<<"Found "<<minIndex<<" as minimum number index"<<endl;
            }
        }
            cout<<"Stored "<<minIndex<<" at index "<<i<<endl;
            swap(nums[i], nums[minIndex]);
        
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
    vector<int>nums = {44, 33, 55, 22, 11};
    cout<<"Before Sorting: ";
    printArr(nums);
    selectionSort(nums);
    cout<<"After Sorting: ";
    printArr(nums);

}