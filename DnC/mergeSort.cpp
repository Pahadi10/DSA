#include <iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = start + (end - start) / 2;
    int leftLength = mid-start+1;
    int rightLength = end-mid;
    int *leftArray = new int[leftLength];
    int *rightArray = new int[rightLength];

    for (int i = 0; i < (leftLength); i++)
    {
        leftArray[i] = arr[start + i];
    }

    for (int i = 0; i < (rightLength); i++)
    {
        rightArray[i] = arr[mid+i+1];
    }

    int leftIndex = 0, rightIndex = 0;
    int mainIndex = start;

    while(leftIndex < leftLength && rightIndex < rightLength ){
        
        if (leftArray[leftIndex] < rightArray[rightIndex])
        {
            arr[mainIndex] = leftArray[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mainIndex] = rightArray[rightIndex];
            rightIndex++;
        }
        mainIndex++;
    }

    while (rightIndex < rightLength)
    {
        arr[mainIndex] = rightArray[rightIndex];
            rightIndex++;
            mainIndex++;
    }

    while (leftIndex < leftLength)
    {
        arr[mainIndex] = leftArray[leftIndex];
            leftIndex++;
            mainIndex++;
    }
    

    delete[] leftArray;
    delete[] rightArray;
    
}

void mergeSort(int arr[], int start, int end)
{
    //Base Case
    if (end <= start)return;
    
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{
   int arr [] = {2, 1, 6, 9, 45, 5};
   int size = sizeof(arr)/sizeof(int);
   int start = 0;
   int end = size-1;
   cout<< "before merge sort: ";
   for (int i = 0; i < size; i++)
   {
    cout<< arr[i]<<" ";
   }
   cout<<endl;
   mergeSort(arr, start, end);
   cout<< "after merge sort: ";
   for (int i = 0; i < size; i++)
   {
    cout<< arr[i]<<" ";
   }
   cout<<endl;
}