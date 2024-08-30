#include <iostream>
using namespace std;

int main()
{
    string s = "2934";
    int num1 = (s[0] - '0') * 10 + (s[1] - '0');
    int num2 = (s[2] - '0') * 10 + (s[3] - '0');
    int num3 = (s[0] - '0') * 10 + (s[2] - '0');
    int num4 = (s[1] - '0') * 10 + (s[3] - '0');
    int num5 = (s[0] - '0') * 10 + (s[3] - '0');
    int num6 = (s[1] - '0') * 10 + (s[2] - '0');

    int sum1 = num1 + num2;
    int sum2 = num3 + num4;
    int sum3 = num5 + num6;
    int maxsum = max(sum1, sum2);
    maxsum = max(maxsum, sum3);
    cout << "max sum: " << maxsum;
}