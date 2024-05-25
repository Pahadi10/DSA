#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr){
int n = arr.size();
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > arr[i])
        {
            swap(arr[j], arr[i]);
        }
        
    }
    
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
   bubbleSort(arr);
   printArr(arr);
}