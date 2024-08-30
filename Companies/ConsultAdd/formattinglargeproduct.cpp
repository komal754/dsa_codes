// Rohan is weak in mathematics.He is giving mathematics  Olympiad , but he got stuck in one
// of the question .Help rohan to solve the question.In Question there are two positive integer
// A and B. You have to find the product of all integer between A and B which is represented in
// the form C=D*10^E , where  C is the product of numbers ,
// D and E are non-negative integers and the last digit of D is non-zero.

#include <iostream>
#include <math.h>
using namespace std;

// to find trailing zero

int countFactors(int start, int end, int factor)
{
    int count = 0;

    for (int i = start; i <= end; i++)
    {
        int num = i;
        while (num % factor == 0)
        {
            count++;
            num /= factor;
        }
    }
    return count;
}

int main()
{
    int start, end;
    cout << "enter the start" << endl;
    cin >> start;
    cout << "enter the end" << endl;
    cin >> end;
    if (start > end)
    { // Added validation for input range
        cout << "Invalid range: start should be less than or equal to end." << endl;
        return 1;
    }
    // to find trailing zero

    int count2 = countFactors(start, end, 2);
    int count5 = countFactors(start, end, 5);
    int trailingZeros = min(count5, count2);
    string s = "";
    long long product = 1;
    for (int i = start; i <= end; i++)
    {
        product *= i;

        while (product % 10 == 0)
        {
            product /= 10;
        }
        product %= 1000000000;
    }

    s = s + to_string(product) + "*10^" + to_string(trailingZeros);
    cout << s << endl;
    return 0;
}