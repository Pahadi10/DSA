// You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.
// We repeatedly make k duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

// Example 1:

// Input: s = "abcd", k = 2
// Output: "abcd"
// Explanation: There's nothing to delete.

// Example 2:
// Input: s = "deeedbbcccbdaa", k = 3
// Output: "aa"
// Explanation:
// First delete "eee" and "ccc", get "ddbbbdaa"
// Then delete "bbb", get "dddaa"
// Finally delete "ddd", get "aa"

// Example 3:
// Input: s = "pbbcggttciiippooaais", k = 2
// Output: "ps"

#include <iostream>
#include <vector>
using namespace std;
// Method 1
// T.C. = O(NK)

// bool isPresent(char &ch, string &ans, int k)
// {
//     int ind = ans.size()-1;
//     for (int i = 0; i < k-1; i++)
//     {
//         if (ch != ans[ind]) return false;
//         ind--;
//     }
    
//     return true;
// }

// string removeDuplicates(string s, int k)
// {
//     string ans = "";
//     for (int i = 0; i < s.size(); i++)
//     {
//         char &new_ch = s[i];

//         if (ans.size() < k - 1)
//         {
//             ans.push_back(new_ch);
//         }
//         else
//         {
//             if (isPresent(new_ch, ans, k))
//             {
//                 for (int j = 0; j < k-1; j++)
//                 {
//                     ans.pop_back();
//                 }
//             }
//             else
    
//                 ans.push_back(new_ch);
//         }

//     }
//     return ans;
// }


//Method - 2 (Two Pointer Approach)
//T.C. = O(N)


string removeDuplicates(string &s, int k){
int i = 0;
int j = 0;

vector<int>count(s.size());
while (j < s.size())
{
    s[i] = s[j];
    count[i] = 1;
    if (i > 0 && s[i-1] == s[i])
    {
        count[i] += count[i-1];
    }
    if (count[i] == k)
    {
        i -= k;
    }
    i++;
    j++;
}
s.resize(i);
return s;
}
int main()
{
    string s = "deeedbbcccbdaa";
    int k = 3;
    cout << removeDuplicates(s, k);
}