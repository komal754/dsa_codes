#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &nums, vector<int> &output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    solve(nums, output, index + 1, ans);

    output.push_back(nums[index]);

    solve(nums, output, index + 1, ans);
    output.pop_back();
}
int main()
{

    vector<int> nums = {1, 2, 3};
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums, output, index, ans);
    for (auto subset : ans)
    {

        cout << " { ";
        for (auto num : subset)
        {
            cout << num<<" ";
        }
        cout << "}  ";

    }
    return 0;
}