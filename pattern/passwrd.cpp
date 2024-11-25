// Example :
// If a = ‘hackerrank’ and b = ‘mountain’,
// The result is hmaocuknetrariannk.
// Function Description :
// Complete the function newPassword in the editor below.
// Parameter(s):
// Str : string a
// Str : string b
#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ans = "";
    int i = 0;

    // Merge characters from both strings alternately
    while (i < a.size() || i < b.size()) {
        if (i < a.size()) {
            ans += a[i]; // Append character from string `a`
        }
        if (i < b.size()) {
            ans += b[i]; // Append character from string `b`
        }
        i++;
    }

    cout << ans << endl; // Output the resulting merged string

    return 0;
}
