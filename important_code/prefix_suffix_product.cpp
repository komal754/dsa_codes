#include<vector>
#include<iostream>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> result(n, 1);
    
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    
    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4}; // example input
    vector<int> result = productExceptSelf(nums);
    
    cout << "Product of all numbers except self: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}