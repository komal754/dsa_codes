#include <iostream>
using namespace std;
int main()
{
    int boxes;
    cout << "enter number of boxes " << endl;
    cin >> boxes;
    int candies[boxes];
    cout << "enter candies in each box : " << endl;
    for (int i = 0; i < boxes; i++)
    {
        cin >> candies[i];
    }

    // sort
    for (int i = 0; i < boxes; i++)
    {
        for (int j = 0; j < boxes; j++)
        {
            if (candies[j] > candies[j + 1])
            {
                int temp = candies[j];
                candies[j] = candies[j + 1];
                candies[j + 1] = temp;
            }
        }
    }

    int result[10000] = {0};
    int k = 0;
     int sum = candies[0];
    for (int i = 1; i < boxes; i++)
    {
       

        sum += candies[i];
        result[k++] = sum;
    }
    int total = 0;

    for (int i = 0; i < k; i++)
    {
        total += result[i];
    }
    cout << "minimum time: "<<total;
    return 0;
}