// Given a string s, reverse only all the vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// Example 1:
// Input: s = "hello"
// Output: "holle"

// Example 2:
// Input: s = "leetcode"
// Output: "leotcede"

#include <iostream>
using namespace std;

// bool isVowel(char c){
//     int i = 0;
//     int j = 9;
//     char arr[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
//     while (i <= j)
//     {
//         int mid = i + (j-i)/2;
//         if (arr[mid] == c)
//         {
//             return true;
//         }
//         else if (arr[mid] < c)
//         {
//             i = mid + 1;
//         }
//         else
//         {
//             j = mid - 1;
//         }
//     }
//     return false;
// }

bool isVowel(char c){
    if (c=='a'||c=='A'||c=='e'||c=='E'||c=='o'||c=='O'||c=='i'||c=='I'||c=='u'||c=='U'){
        return true;}
        return false;
    
}
string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;

        while (start < end)
        {
            if ((isVowel(s[start]) && isVowel(s[end])))
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if (!isVowel(s[start]))
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
   string s = "leetcode";
   cout<<"Reveresed string: "<<reverseVowels(s);
}