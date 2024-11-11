#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    if (n < 2) {
        return -1; // If there are less than 2 elements, return -1
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        return -1; // If there's no second largest, return -1
    }

    return second_largest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int n = arr.size();

    int result = findSecondLargest(n, arr);
    cout << "The second largest element is: " << result << endl;

    return 0;
}
