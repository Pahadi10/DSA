// Given a string str and a character x, find last index of x in str.

// Examples : 

// Input : str = "geeks", x = 'e'
// Output : 2
// Last index of 'e' in "geeks" is: 2 

// Input : str = "Hello world!", x = 'o'
// Output : 7
// Last index of 'o' is: 7 


#include <iostream>
using namespace std;

int solution(string &s, int ind, char &target){
    if (ind < 0)
    {
        return -1; 
    }
    if (s[ind] == target)
    {
        return ind;
    }
    
    return solution(s, ind-1, target);
    
}

int findLastOccurence(string &s, char &x){
    int ind = s.size()-1;
    return solution(s, ind, x);
    
}

int main()
{
    string str = "Hello world!";
    char x = 'o';

    cout << findLastOccurence(str, x);
}