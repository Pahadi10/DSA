#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second; // Sort in descending order of frequency
    }

    string frequencySort(string s) {
        map<char, int> freqMap;
        for (char ch : s) {
            freqMap[ch]++;
        }

        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), cmp);

        string sortedString = "";
        for (auto& p : freqVec) {
            sortedString.append(p.second, p.first);
        }

        return sortedString;
    }
};

int main() {
    Solution solution;
    string input = "tree";
    string output = solution.frequencySort(input);
    cout << "Sorted string: " << output << endl;
    return 0;
}
