
 void reversearrByk(vector<int> &arr, int n, int k)
{
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}
int main()
{
    int n, k;
    cout << endl;
    cout << "enter size of array : " << endl;
    cin >> n;
    cout << "enter value of k : " << endl;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reversearrByk(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
} 