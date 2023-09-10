// Write a function to create a number using digits  

#include <iostream>
#include <cmath>
using namespace std;

void createNumber(int n){
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout<<"Give "<< i+1 <<" number: ";
        cin >> temp;
        int tempii = temp;
        int count = 0;
        while (tempii)
        {
            count++;
            tempii /= 10;
        }
        
        number *= pow(10, count); 
        number += temp;

    }
    cout<<"Integer Created: "<<number;
    
}

int main()
{
    int n;
    cout<<"How many numbers you want to enter? "<<endl<<"-> ";
    cin>>n;
    createNumber(n);
}