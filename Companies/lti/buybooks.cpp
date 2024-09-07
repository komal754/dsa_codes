#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
int sum1=0;
   vector<int>earn(n);
   cout<<"enter array 1"<<endl;
for(int i=0;i<n;i++){
    cin>>earn[i];
    sum1=sum1+earn[i];
}
   cout<<"enter array 2"<<endl;

   vector<int>prices(n);
   int sum2=0;
for(int i=0;i<n;i++){
    cin>>prices[i];
    sum2=sum2+prices[i];

}

cout<<"money to borrow:->"<<sum2-sum1;
}