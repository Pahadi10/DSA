#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    if(n == 0){
        return;
    }
    cout<< *arr<<" ";
    printArray(arr+1, n-1);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 29};
    int n = 5;
    printArray(arr, n);
}