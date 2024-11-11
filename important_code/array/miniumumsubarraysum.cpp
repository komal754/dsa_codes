#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int minSubarraysum(vector<int>arr,int target){
int j=0;
int i=0;
int sum=0;
int mn=INT_MAX;
// int mn=INT_MAX;
while(j<arr.size()){
     sum +=arr[j];
     while(sum>=target){
        sum-=arr[i];
        mn=min(mn,j-i+1);
        i++;
     }
     j++;
}

 //int_max not working but it is only used
if(mn==INT_MAX){              
    return 0;
}

return mn;
}

int main() {
    vector<int> arr = {2, 3, 1, 7, 4, 3};
    int target = 12;
    cout << "Minimum subarray length with sum >= target: " << minSubarraysum(arr, target) << endl;
    return 0;
}