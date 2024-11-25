#include <iostream>
#include <vector>
#include <climits>
using namespace std;



// using dp of tabulation method

int mincoins(vector<int> &coins, int amount)
{

    // we will create dp/1-d array for all amount till give amount starting from 0
    // alll initialized with maximum number of coins
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    if (dp[amount] == INT_MAX)
    {
        return -1;
    }
    return dp[amount];
}

int main()
{
    int n;
    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << "enter the amount" << endl;
    int amount;
    cin >> amount;

    cout << "minimum coins required: " << mincoins(coins, amount);
}