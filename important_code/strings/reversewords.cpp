#include <iostream>
#include<sstream>
#include <string>
using namespace std;

string reverseWords(string s)
{
    stringstream extract(s);
    string word;
    string ans;
    while (extract >> word)
    {
        if (!ans.empty())
            ans = word + " " + ans;
        else
            ans = word;
    }
    return ans;
}

int main()
{
    string input;
    getline(cin,input);
    cout<<reverseWords(input);
}