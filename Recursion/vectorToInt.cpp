// An integer vector is given, generate an integer with the elements of the vector

// example: 
// input- [4, 7, 3, 9]
// output- 4739

#include <iostream>
#include <vector>
using namespace std;

int combineNumbers(vector<int> vec, int &num, int ind){

    if (ind >= vec.size())
    {
        return num;
    }
    num = num * 10 + vec[ind];

    return combineNumbers(vec, num, ind + 1);
    
}

int main()
{
    vector<int> vec = {4, 7, 3, 9};
    int num = 0;
    int ind = 0;
    cout<< combineNumbers(vec, num, ind);
}