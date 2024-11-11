#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        vector<vector<int>> pairs;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                pairs.push_back({nums1[i], nums2[j]});
            }
        }

        sort(pairs.begin(), pairs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] + a[1] < b[0] + b[1];
             });
        vector<vector<int>> res;
        for (int i = 0; i < min(k, (int)pairs.size()); i++) {
            res.push_back(pairs[i]);  // Add the smallest pairs to the result
        }
// Directly initialize with a range

        return res; // Return the result
    }