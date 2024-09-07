//longest substring without repeating character

#include<bits/stdc++.h>
#include<string>
#include<unordered_map>

    int lengthOfLongestSubstring(string s) {
        // string substr = "";
        int count = 0;
        int maxi = 0;
        int start = 0;
       unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            count++;
            if (mp[s[i]] > 1) {
                while (mp[s[i]] > 1) {
                    mp[s[start]]--;
                    count--;
                    start++;
                }
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }

