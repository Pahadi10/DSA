// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);

// Example 1:
// Input: s = "PAYPALISHIRING", numRows = 3
// Output: "PAHNAPLSIIGYIR"

// Example 2:
// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I

// Example 3:
// Input: s = "A", numRows = 1
// Output: "A"

#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1 || numRows >= s.length())
    {
        return s;
    }
    vector<string> zigzag(numRows);
    int rows = 0;
    int direction = 1;
    string result = "";
    int i = 0;

    while (i < s.size())
    {
        if (direction)
        {
            while (rows < numRows && i < s.size())
            {
                zigzag[rows++].push_back(s[i++]);
            }
            rows = numRows - 2;
        }
        else
        {
            while (rows >= 0 && i <s.size())
            {
                zigzag[rows--].push_back(s[i++]);
            }
            rows = 1;
            
        }
        direction = !direction;
    }

    for (auto st : zigzag)
    {
        result += st;
    }
    

    return result;
}

int main()
{
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << convert(s, numRows) << endl;
    return 0;
}
