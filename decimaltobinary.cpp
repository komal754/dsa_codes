#include <iostream>
using namespace std;
int main()
{
    string s = "";
    int n;
    cout<<"enter decimal number: "<<endl;
    cin >> n;
    if (n == 0) 
    {
        return n;
    }
    while (n > 0)
    {
        s = s + to_string(n % 2);
        n /= 2;
    }
    cout<<"binary representation : "<<endl;
    cout << s;
}