#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnargam(string s, string t)
{
    unordered_map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    for (auto x : t)
    {
        mp[x]--;
    }

    for (auto x : mp)
    {
        if (x.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, t;
    cout << "enter string 1: ";
    cin >> s;
    cout << endl;
    cout << "enter string 2: ";
    cin >> t;
    cout << endl;

    if (isAnargam(s, t))
    {
        cout << "It is valid anargam!!";
    }
    else
    {
        cout << "It is not valid anargam!!";
    }
}