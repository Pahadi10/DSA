// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

// Example 1:
// Input: timePoints = ["23:59","00:00"]
// Output: 1

// Example 2:
// Input: timePoints = ["00:00","23:59","00:00"]
// Output: 0

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    int i = 0;
    int n = timePoints.size() - 1;
    vector<int> time;
    while (i <= n)
    {
        string hr = timePoints[i].substr(0, 2);
        string min = timePoints[i].substr(3, 2);

        int hour = stoi(hr);
        int minute = stoi(min);

        int totalMinutes = hour * 60 + minute;
        time.push_back(totalMinutes);
        i++;
    }

    sort(time.begin(), time.end());

    int mini = INT_MAX;
    for (int i = 0; i < time.size() - 1; i++)
    {
        mini = min(time[i + 1] - time[i], mini);
    }
    
    mini = min(mini, time[0] + 1440 - time[time.size()-1]);
    return mini;
}

int main()
{
    vector<string> timePoints = {"12:12","00:13"};
    cout << "Minimum minute difference = " << findMinDifference(timePoints);
}