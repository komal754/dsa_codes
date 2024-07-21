// compound conditional statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using  namespace std;
int main()
{
    int m1,m2,m3;
    float Total, avg;
    cout << "enter the m1,m2,m3";
    char a, b, c;
        cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3;
    if (avg >= 60)
    {
        cout << "a";
    }
    else if (avg>= 35&&avg<60)
    {
        cout << "b";
    }
    else
    {
        cout << "c";
    }
    cout << "Hello World!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
