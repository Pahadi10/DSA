// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Example 1:
// Input: s = "aba"
// Output: true

// Example 2:
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.

#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){

   while (i < j)
   {
      if (s[i] != s[j])
      {
         return false;
      }
      i++;
      j--;
   }
   return true;
}

bool validPalindrome(string s) {
int i = 0;
int j = s.length()-1;
while (i < j)
{
   if (s[i] == s[j])
   {
      i++;
      j--;
   }
   else
   {
      bool leftRemoval = checkPalindrome(s, i+1, j);
      bool rightRemoval = checkPalindrome(s, i, j-1);

      return leftRemoval || rightRemoval;
      
   } 
}
return true;      

}

int main()
{
   string s = "abda";
   cout<<"The string could be a plaindrome: "<<validPalindrome(s);
}