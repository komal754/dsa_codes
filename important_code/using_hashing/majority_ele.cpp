#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int threshold=n/3;
        vector<int>majorityElements;
        int element,count;
         for(const auto pair:freq){
             element=pair.first;
             count=pair.second;
         
         if(count>threshold){
            majorityElements.push_back(element);
         }
         }
         return majorityElements;
    }
};