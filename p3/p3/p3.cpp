// p3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {

public:

    int reverse(int x) {

        int ans = 0;

        while (x != 0) {
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};
