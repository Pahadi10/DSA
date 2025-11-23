// 415. Add Strings
// Easy
// Topics
// Companies
// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// Example 1:
// Input: num1 = "11", num2 = "123"
// Output: "134"

// Example 2:
// Input: num1 = "456", num2 = "77"
// Output: "533"

// Example 3:
// Input: num1 = "0", num2 = "0"
// Output: "0"

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.



#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

// Iterative Approach

// string addStrings(string num1, string num2)
// {
//     string ans;
//     int carry = 0;
//     int i = num1.length() - 1;
//     int j = num2.length() - 1;

//     while (i >= 0 || j >= 0 || carry != 0)
//     {
//         int digit1 = i >= 0 ? num1[i] - '0' : 0;
//         int digit2 = j >= 0 ? num2[j] - '0' : 0;

//         int ansDigit = digit1 + digit2 + carry;
//         carry = ansDigit / 10;
//         ans.push_back(ansDigit % 10 + '0'); 
//         i--;
//         j--;
//     }

//     reverse(ans.begin(), ans.end());
//   return ans;      
// }




// Recursive Approach

string solve (string &num1, string &num2, int i, int j, int &carry, string &ans){

    if (i < 0 && j < 0)
    {
        if (carry)
        {
            ans.push_back(carry + '0');
        }
        
        return ans;
    }
    
    int digit1 = (i >= 0? num1[i] : '0') - '0';
    int digit2 = (j >= 0? num2[j] : '0') - '0';
    int ansDigit = digit1 + digit2 + carry;
    carry = ansDigit / 10;
    ans.push_back((ansDigit % 10) + '0');

    return solve(num1, num2, --i, --j, carry, ans);
}

 string addStrings(string num1, string num2) {
    string ans;
    int carry = 0;
    int i = num1.length()-1;
    int j = num2.length()-1;

    ans = solve(num1, num2, i, j, carry, ans);
    reverse(ans.begin(), ans.end());
    return ans;    
 }


int main()
{
    string num1 = "11";
    string num2 = "123";

    cout << addStrings(num1, num2);
}

//