// p1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    i = n;
    while (i > 0) {
        j = 0;
        while (j < i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << "\n";
        i = i - 1; 
    }

}


// 