// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.
// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
// Return any permutation of s that satisfies this property.

// Example 1:
// Input: order = "cba", s = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

// Example 2:
// Input: order = "cbafg", s = "abcd"
// Output: "cbad"

#include <iostream>
#include <algorithm>
using namespace std;

static string str;

bool compare (char char1, char char2){
    return(str.find(char1) < str.find(char2));
}

string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);

    return s;
    }
int main()
{
   string order = "cba";
   string s = "abcd";

   cout<<"Sorted string: "<<customSortString(order, s);
}