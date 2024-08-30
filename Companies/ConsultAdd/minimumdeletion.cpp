#include <iostream>
#include <string>      // Include this line for std::string
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    int minDeletions(std::string s) {  // Use std::string here
        std::unordered_map<char, int> mp;
        std::unordered_set<int> st;
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        for (auto &it : mp) {
            int temp = it.second;

            while (temp > 0 && st.find(temp) != st.end()) {
                ans++;
                temp--;
            }
            st.insert(temp);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::string s = "aaabbbcc";
    int result = sol.minDeletions(s);
    std::cout << "Minimum deletions required: " << result << std::endl;
    return 0;
}

