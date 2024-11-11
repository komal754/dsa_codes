#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int carry = 0;
    int sum = 0;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    string ans = "";
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int d1=0;
        int d2=0;
        if (i >= 0)
        {
             d1 = s1[i] - '0';
            i--;
        }
               if (j >= 0)
        {
         d2 = s2[j] - '0';
            j--;
        }
        sum = (d1 + d2 + carry) % 2;
        ans = to_string(sum) + ans;
        carry = (d1 + d2 + carry) / 2;


    }
    cout << ans;
}