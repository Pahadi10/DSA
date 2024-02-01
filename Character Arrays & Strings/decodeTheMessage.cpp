// You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:

// Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
// Align the substitution table with the regular English alphabet.
// Each letter in message is then substituted using the table.
// Spaces ' ' are transformed to themselves.
// For example, given key = "happy boy" (actual key would have at least one instance of each letter in the alphabet), we have the partial substitution table of ('h' -> 'a', 'a' -> 'b', 'p' -> 'c', 'y' -> 'd', 'b' -> 'e', 'o' -> 'f').
// Return the decoded message.

// Example 1:

// Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
// Output: "this is a secret"
// Explanation: The diagram above shows the substitution table.
// It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".

#include <iostream>

using namespace std;

//Solution 1:

// string decodeTheMessage(string message, string key)
// {
//     string temp;
//     char a = 'a';
//     int i = 0;
//     int j = 0;
//     while (key[i] != '\0')
//     {
//         if (key[i] == ' ')
//         {
//             i++;
//             continue;
//         }
//         else if (temp.find(key[i]) == string::npos)
//         {
//             temp.push_back(key[i]);
//         }
        
//         i++;
//     }
//     temp.push_back(' ');
//     key = "abcdefghijklmnopqrstuvwxyz ";
//     cout<<temp<<endl;
//     cout<<key<<endl;

//     while (message[j] != '\0')
//     {
//         int ind = temp.find(message[j]);
//         message[j] = key[ind];
//         j++;
//     }
    
//     return message;
// }


// Solution 2

string decodeTheMessage(string message, string key){
    char start = 'a';
    char mapping[256] = {0};
    string ans;
    for (auto ch : key)
    {
        if (ch != ' ' && mapping[ch] == 0)
        {
            mapping[ch] = start++;
        }
    }

    for (auto i : message)
    {
        if (i == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(mapping[i]);
        } 
    }
return ans;    
}

int main()
{
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    string key = "eljuxhpwnyrdgtqkviszcfmabo";
    cout<<"Decoded message = "<<decodeTheMessage(message, key);
}