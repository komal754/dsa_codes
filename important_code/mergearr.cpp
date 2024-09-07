#include<iostream>
#include<vector>
using namespace std;

//using normal loops:::->>>>>>>>>>>>>>>>>
 double mergedArray(vector<int>& nums1, vector<int>& nums2) {

int n1=nums1.size();
int n2=nums2.size();

vector<int>nums(n1+n2);
for(int i=0;i<n1;i++){
    nums[i]=nums1[i];
}
for(int i=0;i<n2;i++){
    nums[n1+i]=nums2[i];
}
for(int i=0;i<n1+n2;i++){
cout<<nums[i]<<"  ";
}
}
int main(){
    vector<int>nums1;
    vector<int>nums2;
 nums1={1,3,5,2};
 nums2={11,33,25,21};
return mergedArray(nums1,nums2);
}
 

