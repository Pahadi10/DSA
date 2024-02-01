// Given a string s, reverse the string according to the following rules:
// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

// Example 1:
// Input: s = "ab-cd"
// Output: "dc-ba"

// Example 2:
// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"

// Example 3:
// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"

// Constraints:
// 1 <= s.length <= 100
// s consists of characters with ASCII values in the range [33, 122].
// s does not contain '\"' or '\\'.


#include <iostream>
using namespace std;

//Method 1
//Brute force method
// higher time complexity
// T.C - O(n)

// string reverseOnlyLetters(string s) {
//         int i = 0;
//         int j = s.length()-1;

//         while (i < j)
//         {
//             int ch1 = s[i];
//             int ch2 = s[j];

//             if ( ch1 < 65 || ch1 > 122 || (ch1 > 90 && ch1< 97))
//             {
//                 i++;
//             }
//             if (ch2 < 65 || ch2 > 122 || (ch2 > 90 && ch2< 97))
//             {
//                 j--;
//             }
//             else if (((ch1 >= 65 && ch1 <= 90) || (ch1 >= 97 && ch1 <= 122)) && ((ch2 >= 65 && ch2 <= 90) || (ch2 >= 97 && ch2 <= 122)))
//             {
//                 swap(s[i], s[j]);
//                 i++;
//                 j--;
//             }
//         }
//     return s;
// }

//Method 2
//Optimized method using STL
// lower time complexity
// T.C - O(n)
string reverseOnlyLetters(string s) {
    int start = 0;
    int end = s.length()-1;

    while (start < end)
    {
        if (isalpha(s[start]) && isalpha(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (!isalpha(s[start]))
        {
            start++;
        }
        else
        {
            end--;
        }   
    }
    return s;
    
}

int main()
{
    string s = "Test1ng-Leet=code-Q!";
    cout<< "Reversed string: "<<reverseOnlyLetters(s);
}

