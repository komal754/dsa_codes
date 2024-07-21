#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans){
//base conition
if(index>=nums.size()){
    ans.push_back(output);
    return ;
}

//exclude
solve(nums,output,index+1,ans);

//include
int element=nums[index];
output.push_back(element);
solve(nums,output,index+1,ans);
}

vector<vector<int>>subsets(vector<int>&nums){
vector<int>output;
int index=0;
vector<vector<int>>ans;
solve(nums,output,index,ans);
return ans;
}
int main() {
    vector<int> nums = {1, 2, 3, 5,  6}; // Example input
    vector<vector<int>> result = subsets(nums);

    // Output the result
    cout << "Subsets: " << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
