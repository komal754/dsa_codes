// no of sweet eat per day:
// no. of days:D
// no. of sweets per box: N

// find minimum how nmany times to buy
// can not buy on sunday
#include <iostream>
using namespace std;

int main()
{
    int eat, days, perbox;
    cin >> perbox >> eat >> days;
    int count = 1;

    int having = perbox;
    for (int i = 1; i <= days; i++)
    {
        if (having < eat && i % 7 != 0)
        {
            having += perbox;
            count++;
        }
        having -= eat;
    }

    cout << count;

    return 0;
}