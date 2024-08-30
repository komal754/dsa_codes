#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"1", "10", "100", "101", "1000", "1001", "1010", "10000", "10001", "10010"};
    cout << "enter size: " << endl;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cout << "enter values: " << endl;
        cin >> a;

        if (a >= 1 && a <= 10)
        {
            cout << arr[a - 1] << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
    return 0;
}