#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    int drop = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
        if (temp - arr[i] > drop)
        {
            drop = temp - arr[i];
        }
    }
    cout << "max drop" << drop;
}