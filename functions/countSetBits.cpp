// Write a function to count set bits of a number 

#include <iostream>
using namespace std;

int countsetBits(int n){
    int count = 0;
    while (n)
    {
        if (n & 1 == 1)
        {
            count ++;
        }
        n = n >> 1;
        
    }
    
return count;
}

int main(){
    int number;
    cout<<"Give the number to count the set bits ";
    cin>>number;

    cout<< countsetBits(number);
}