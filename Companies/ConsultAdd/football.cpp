// The number of goals achieved by two football teams in matches in a
//  league is given in the form of two lists. For each match of team B.
//   Compute the total number of matches of team A where team A has scored less
//   than or equal to the number of goals scored by team B in that match.

// Example :
// team A =[ 1,2,3]
// team B =[ 2,4]
// Team A has played three matches and has scored team A =[1,2,3] goals in each match respectively. Team B has played two matches and has scored team B = [2,4] goals in each match respectively. For 2 goals scored by team B in its first match, team A has 2 matches with scores 1,2 and 3 hence , the answer is [2,3].

// Function Description :

// Complete the function counts in the editor below.

// Counts has the following parameters:
// int teamA(n): First array of positive integers
// int teamB(m): Second array of positive integers

// Return :
// int(m): an array of m positive integers, one for each teamB[i] representing the total
//  in the given order.

// Constraints :
// 2<_n, m<_10^5
// 1<_ teamA[j]<_10^9,where 0<_j<n.
// 1<_ teamB[i]<_10^9,where 0<_j<m

// Input format for custom Testing :
// Input from stdin will be processed as follows and passed to the functions.

// The first line contains an integer n, the number of elements in teamA.
// The next n lines each contain an integer describing teamA[j] where 0<_j<n.
// The next line contains an integer m, the number of elements in teamB.
// The next m lines each contain an integer describing teamB[i]where 0<_i<m.

// Sample input 0 :
// 4 -> teamA[] size n = 4
// 1 -> teamA = [1,4,2,4]
// 4
// 2
// 4
// 2-> teamB [] size m = 2
// 3-> teamB = [3,5]
// 5

// Sample ōutput 0 :
// 2
// 4

#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int n, m;
    cout << "enter n" << endl;
    cin >> n;
    cout << "enter m" << endl;
    cin >> m;
    vector<int> arr1(n), arr2(m), arr3(m);

    input(arr1, n);
    input(arr2, m);
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] <= arr2[i])
            {
                count++;
            }
        }
        arr3[i] = count;
    }
    print(arr3, m);
    return 0;
}