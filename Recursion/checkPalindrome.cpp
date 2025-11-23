// Palindrome check function

#include <iostream>
using namespace std;

// my solution 

// bool solve(string &s, int &start, int &end, bool &ans){
//     bool tempAns;
//     if(start >= end){
//         return ans;
//     }

//     else{
//         if (s[start] == s[end])
//         {
//             tempAns = ans && true;
//         }
//         else
//         {
//             tempAns = ans && false;
//         }
//         ans = ans && tempAns;
//     }
//         return solve(s, ++start, --end, ans);
// }

// bool checkPalindrome(string s){
//     int start = 0;
//     int end = s.length()-1;
//     bool ans = true;
//     return solve(s, start, end, ans);
// }



//Straight forward solution

bool checkPalindrome(string &s, int start, int end){

    //Base case
    if (start >= end)
    {
        return true;
    }

    // Solve one case
    if (s[start] != s[end])
    {
        return false;
    }

    return checkPalindrome(s, ++start, --end);
    
    
}

int main()
{
   string s = "racecar";
   cout << checkPalindrome(s, 0, s.length()-1);
}