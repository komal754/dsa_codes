#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int multiply(int n)
{
    int sum = 0;
    int digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += (digit * digit);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n)
{
    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end())
    {
        seen.insert(n);
        n = multiply(n);
    }

    return n == 1;
}
int main()
{
    int n;
    cin >> n;
    if(isHappy(n)){
        cout<<1;
    }
    else{
        cout<< -1;
    }
}