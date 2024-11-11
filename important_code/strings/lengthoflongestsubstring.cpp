
// Given a string s, find the length of the longest
// substring without repeating characters.
// Example 1:
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int start = 0;
    int count = 0;
    int maxi = 0;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        count++;
        while (mp[s[i]] > 1)
        {
            mp[s[start]]--;
            start++;
            count--;
        }
        maxi = max(count, maxi);
    }
    return maxi;
}

int main()
{

    string s;
    cin >> s;
    cout << "lenght of longest substring in " << s << endl;
    cout << lengthOfLongestSubstring(s) << endl;
}