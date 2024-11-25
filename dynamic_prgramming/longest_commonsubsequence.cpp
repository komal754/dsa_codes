// from leetcode

// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
        

//         vector<int>dp(text1.length(),0);
//         int longest=0;
//         for(int j=0;j<text2.length();j++){
//             char c=text2[j];
//             int curr_len=0;

//             for(int i=0;i<dp.size();i++){
//                 if(curr_len<dp[i]){
//                     curr_len=dp[i];
//                 }
//                 else if( c==text1[i]){
//                     dp[i]=curr_len+1;
//                     longest=max(longest,dp[i]);
//                 }
//             }
//         }
//         return longest;
//     }
// };