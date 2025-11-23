// You are given a string s. You need to reverse the string.

// Example 1:
// Input:
// s = Geeks
// Output: skeeG

// Example 2:
// Input:
// s = for
// Output: rof

#include <iostream>
using namespace std;


//In place reverse the string
string solve(string &s, int start, int end){
    if (end <= start)
    {
        return s;
    }

    swap(s[start], s[end]);

    return solve(s, start + 1, end - 1);
    
}



// Using temporary array to reverse the string
// string solve(string &s, string &output, int ind){
//     if (ind < 0)
//     {
//         return output;
//     }

//     output += s[ind];
//     return solve(s, output, ind-1);
    
// }

string reverseStr(string &s){
    // string output = "";  using temporary array
    int start = 0;
    int end = s.size()-1;
    return solve(s, start, end);
}

int main()
{
   string s = "This is example";
   cout << reverseStr(s);
}