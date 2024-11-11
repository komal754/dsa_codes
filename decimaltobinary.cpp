#include <iostream>
using namespace std;
int main()
{
    string s = "";
    int n;
    cout << "enter decimal number: " << endl;
    cin >> n;
    if (n == 0)
    {
        return n;
    }
    int sum = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        sum += (n % 2);
        n /= 2;
    }
    cout << "binary representation : " << endl;
    cout << s << endl;
    cout << "bits sum : " << endl;
    cout << sum;
}