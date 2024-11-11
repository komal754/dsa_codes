#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(const vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

vector<vector<int>> threeSum(vector<int> arr, int n, int K)
{

    //sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n  - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        //skips the duplicate as it will produce same pair
        if (i > 0 && arr[i] == arr[i - 1])
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
    int n, k;
    cout << "enter size" << endl;
    cin >> n;
    cout << "enter k" << endl;
    cin >> k;
    vector<int> arr(n);
    input(arr, n);
    vector<vector<int>> result;
    result = threeSum(arr, n, k);
    cout << "Triplets that sum up to " << k << ":" << endl;
    for (const auto &triplet : result)
    {
        print(triplet, 3);
        cout << endl;
    }
    return 0;
}