#include <iostream>
using namespace std;

int countLastwrdLen(string s)
{
    int count = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            if (count > 0)
            {
                return count;
            }
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << countLastwrdLen(s) << endl;
    return 0;
}
