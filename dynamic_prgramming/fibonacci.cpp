#include<bits/stdc++.h>
using namespace std;

//recursion top down(dp)

// int fib(int n,vector<int>&dp){
// if(n<=1){
//         return n;
// }
// if(dp[n]!=-1){
//         return dp[n];
// }
// dp[n]=fib(n-1,dp)+fib(n-2,dp);
// return dp[n];

// }

// int main()
// {
// int n;
// cin>>n;
// vector<int>dp(n+1);
// for(int i=0;i<=n;i++){
//         dp[i]=-1;
// }
// cout<<fib(n,dp)<<endl;
// return 0;
// }


// int main(){
//     int n;
//     cin>>n;

//     // step-1
//     vector<int>dp(n+1);

//     //step-2
//     dp[0]=0;
//     dp[1]=1;

//     // step-3

//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }

//     cout<<"nth fibonacci number:"<<dp[n]<<endl;
// return 0;
// }


//using shifting:->

int main(){

int n;
cin>>n;
int prev1=0,prev2=1;
  if(n==0){
    return prev1;
  }
for(int i=2;i<=2;i++)
{
    int curr=prev1+prev2;
    prev1=prev2;
    prev2=curr;
}
    cout<<prev2;
    return 0;
}