// #include<vector>
// #include<iostream>
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();

//         if(n == 1 ) return nums[0];

//         int ele = 0, count = 0;

//         for(int i = 0;i < n ; i++){
//             if( count == 0 ) {
//                 ele = nums[i];
//                 count++;
//             }
//             else if(nums[i] == ele ) 
//                 count++ ;
//             else if(nums[i] != ele )
//                 count-- ;
//         }
//         return ele;
//     }
// };




// ALTERNATE
    //     int count=0;
    //     int max=0;
    //     int majel=0;

    //     if(nums.size()==1){
    //         return nums[0];
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         count=0;
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]==nums[j]){
    //                 count++;

    //             }
    //             if(count>max){
    //                 max=count;
    //                 majel=nums[i];
    //             }
    //         }
    //     }
    //     return majel;
    // }
// };