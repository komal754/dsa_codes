#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(count>maxi){
        maxi = count;
        }
        if (s[i] == '.')
        {
            count = 0;
        }
        count++;
    }
    cout << maxi;
}