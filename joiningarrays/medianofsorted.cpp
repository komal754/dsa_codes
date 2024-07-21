#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n1=nums1.size();
int n2=nums2.size();
int n=n1+n2;
double ans;
vector<int>nums(n);
for(int i=0;i<n1;i++){
    nums[i]=nums1[i];
}
for(int i=0;i<n2;i++){
    nums[n1+i]=nums2[i];
}
sort(nums.begin(),nums.end());
    if(n%2==0){
      ans=(nums[n/2-1]+nums[n/2])/2.00000;
    }
    else{
        ans=nums[n/2];
    }
    return ans;
}
int main(){
    vector<int>nums1;
    vector<int>nums2;
 nums1={1,2};
 nums2={3,4};
 double ans=findMedianSortedArrays(nums1,nums2);
 cout<< ans;
}
