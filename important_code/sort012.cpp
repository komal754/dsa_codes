#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();  // Get the size of the array
        int low = 0;          // Pointer for 0s boundary
        int high = n - 1;     // Pointer for 2s boundary
        int mid = 0;          // Pointer for current element

        // Traverse the array until mid exceeds high
        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap nums[mid] and nums[low], increment both
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                // Mid is 1, so just move ahead
                mid++;
            } else {
                // Swap nums[mid] and nums[high], decrement high
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    // Create a Solution object
    Solution solution;
    
    // Call the sortColors function
    solution.sortColors(nums);
    
    // Output the sorted array
    cout << "Sorted colors: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
