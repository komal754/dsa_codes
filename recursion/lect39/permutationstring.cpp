#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void solve(string &str, vector<string> &ans, int index)
{
    if (index >= str.length())
    {
        ans.push_back(str);
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        solve(str, ans, index + 1);
        swap(str[index], str[j]);
    }
}
vector<string> generatePermutations(string &str)
{
    // write your code here
    int index = 0;
    vector<string> ans;
    solve(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
       string str = "abc"; // Example input
    vector<string> result = generatePermutations(str);

    // Output the result
    cout << "permutations: " << endl;
    for (const auto &permutation : result) {
        cout << permutation << endl;
    }

    return 0;
}
