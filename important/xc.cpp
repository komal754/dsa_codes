// xc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*int x = 5;
    x = ++x + ++x;
    cout << x;*/
    int x = 5;
     int y = ++x + x++;
    cout << y;
    return 0;

    /*int x = 5;
    int* ptr = &x;
    cout << (*ptr)++;
    */
    char str[] = "hello";
}
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
