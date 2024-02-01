// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

// Example 1:
// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.

// Example 2:
// Input: words = ["a","b","c"], pattern = "a"
// Output: ["a","b","c"]

#include <iostream>
#include <vector>
using namespace std;

string createMapping(string s){
    char array[256] = {0};
    char var = 'a';
    for (auto i : s)
    {
        if (i != 0)
        {
            array[i] = var++;
        }
    }
    

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        s[i] = array[ch];
    }

return s;
}
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
 pattern = createMapping(pattern);
 vector<string> ans;
 for (int i = 0; i < words.size(); i++)
 {
    string str = createMapping(words[i]);
    
    if (str == pattern)
    {
        ans.push_back(words[i]);
    }
    
 }
return ans;
}

int main()
{
   vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
   string pattern = "abb";

   int i = 0;
   cout<<"Output: ";
   vector<string>ans = findAndReplacePattern(words, pattern);
   while (i < ans.size())
    {
        cout<<ans[i++]<<" ";
    }

}