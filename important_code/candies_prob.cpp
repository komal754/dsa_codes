// There are n children standing in a line. Each child is assigned a rating value given in the
//  integer array ratings.

// You are giving candies to these children subjected to the following requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// Return the minimum number of candies you need to have to distribute the candies to the
//  children.

// Example 1:
// Input: ratings = [1,0,2]
// Output: 5
// Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies
//  respectively.

#include <iostream>
#include <vector>
using namespace std;

int min_req_candy(vector<int> ratings, int n)
{
    int sum = 0;
    vector<int> candies(n, 1);

    // left pass:
    for (int i = 1; i < n; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {
            candies[i] = candies[i -1]+1;
        }
    }

    // right pass

    for (int i = n - 2; i >=0; i--)
    {
        if (ratings[i] > ratings[i + 1])
        {
            candies[i] =max(candies[i],candies[i+1]+1);
        }
    }

    for(int i=0;i<n;i++){
        sum+=candies[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    vector<int>ratings(n);
    cout<<"enter ratings"<<endl;
    for(int i=0;i<n;i++){
        cin>>ratings[i];
    }
    cout<<min_req_candy(ratings,n);
}