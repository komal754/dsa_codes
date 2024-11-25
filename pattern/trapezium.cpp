// **.**
// *…*
// …..
// *…*
// **.**
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Outer loop for printing each row
    for (int i = 0; i < n; i++)
    {
        // First inner loop to print leading stars
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }

        // Second inner loop to print dots in the middle
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << ".";
        }

        // Third inner loop to print trailing stars
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }

        // Move to the next line after finishing the current row
        cout << endl;
    }

    // Print the bottom half of the pattern (reverse of the top half)
    for (int i = n - 2; i >= 0; i--)
    {
        // First inner loop to print leading stars
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }

        // Second inner loop to print dots in the middle
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << ".";
        }

        // Third inner loop to print trailing stars
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }

        // Move to the next line after finishing the current row
        cout << endl;
    }

    return 0;
}
