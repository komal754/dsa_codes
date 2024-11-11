#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int row,col;
    //      vector<vector<int>>matrix[row][col];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ptr = 0;
        if (i <= n / 2)
        {
            while (ptr >= 0 && ptr < n)
            {
                if (ptr >= n / 2 - i && ptr <= n / 2 + i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                ptr++;
            }
            cout << endl;
        }
        else if(i>n/2){
             while (ptr >= 0 && ptr < n)
            {
                if (ptr >= n / 2-(n-i-1)  && ptr <= n/2+(n-i-1) )
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                ptr++;
            }
            cout << endl;
        }
    }
}