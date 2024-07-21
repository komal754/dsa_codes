#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    // Using stack
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (s.top() >= curr) {
            s.pop();
        }

        // ans stored at stack top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 8, 5, 2, 25};
    int n = arr.size();
    vector<int> result = nextSmallerElement(arr, n);

    cout << "Next Smaller Elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
