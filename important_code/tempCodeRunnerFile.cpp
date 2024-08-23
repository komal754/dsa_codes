#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
vector<vector<int>> threeSum(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[arr[i - 1]])
        {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == K)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                {
                    j++;
                }
                while (j < k && arr[k] == arr[k + 1])
                {
                    k--;
                }
            }
            else if (sum < K)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return ans;
}

int main()
{
    int n, K;
    cout << "enter size" << endl;
    cin >> n;
    cout << "enter k" << endl;
    cin >> K;
    vector<int> arr(n);
    input(arr, n);
   threeSum(arr, n, K);
}