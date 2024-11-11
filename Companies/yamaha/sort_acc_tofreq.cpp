#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> sortFreq(vector<int> &nums)
{
    unordered_map<int, int> mp;

    for (int num : nums)
    {
        mp[num]++;
    }

    vector<pair<int, int>> valfreq;

    for (auto it : mp)
    {
        valfreq.push_back(it);
    }

    sort(valfreq.begin(), valfreq.end(), [](pair<int, int> &a, pair<int, int> &b)
         {
if(a.second==b.second){
    return a.first<b.first;
}
return a.second>b.second; });
    vector<int> result;

    for (auto it : valfreq)
    {
        for (int i = 0; i < it.second; i++)
        {
            result.push_back(it.first);
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
   // Call the sortFreq function and store the result
    vector<int> sortedNums = sortFreq(nums);

    // Output the sorted result
    cout << "Sorted elements by frequency: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}