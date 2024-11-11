#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Reading the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Step 1: Find where the array starts decreasing
    int left = 0, right = n - 1;

    // Find the first point where the array starts decreasing
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the entire array is already sorted, return 1
    if (left == n - 1) {
        cout << "1" << endl;
        return 0;
    }

    // Step 2: Find the point where the array starts increasing again after decreasing
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Step 3: Reverse the subarray between 'left' and 'right'
    reverse(arr.begin() + left, arr.begin() + right + 1);

    // Step 4: Check if the array is sorted after reversing the subarray
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "1" << endl;  // The array can be sorted by reversing a subarray
    } else {
        cout << "0" << endl;  // The array cannot be sorted by reversing a subarray
    }

    return 0;
}
