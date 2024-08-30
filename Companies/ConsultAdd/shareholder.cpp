// Ratan is a crazy rich person. And he is blessed with luck, so he always made the
//  best profit possible with the shares he bought. That means he bought a share at
//   a low price and sold it at a high price to maximize his profit. Now you are an
//    income tax officer and you need to calculate the profit he made with the given 
//    values of stock prices each day. You have to calculate only the maximum profit 
//    Ratan earned.
// Note that:
// Ratan never goes into loss.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&prices,int n){
    for(int i=0;i<n;i++){
        cin>>prices[i];
}
}
void print(vector<int>&prices,int n){
    for(int i=0;i<n;i++){
        cout<<prices[i]<<" ";
}
}


int maxProfit(vector<int>&prices){
    int profit=0;
    int buy=prices[0];
    int n=prices.size();

    for(int i=0;i<n;i++){
        if(prices[i]<buy){
            buy=prices[i];
    }
    else if(prices[i]-buy>profit){
        profit=prices[i]-buy;
    }
    }
    return profit;
} 

int main(){
int n;
cout<<"enter size of array"<<endl;
cin>>n;
vector<int>prices(n);
cout<<"enter elements"<<endl;
input(prices,n);
cout<<"maximum profit is:"<<maxProfit(prices);
}