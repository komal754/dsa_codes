// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a = 32;
    int b = a >> 3;
    int c = 315;

    cout << "a=" << bitset<8>(a) << endl;
    cout << "b=" << bitset<8>(b) << endl;
    cout << "c=" << bitset<16>(c) << endl;

    return 0;

}

