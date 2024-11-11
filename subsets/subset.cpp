#include <iostream>
#include <vector>
using namespace std;

void solve(const vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
  
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // Exclude the current element from the output vector
    solve(nums, output,index + 1, ans);

    // Include the current element in the output vector
    output.push_back(nums[index]);


    solve(nums, output, index + 1, ans);

    // Backtracking step: remove the current element from the output vector
    output.pop_back();
}

int main() {
    vector<int> nums = {1, 2, 3};
    int index = 0;
    vector<int> output;
    vector<vector<int>> ans;

    solve(nums, output, index, ans);

    // Output the result
    for ( auto subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }

    return 0;
}