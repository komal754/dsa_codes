#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    cout<<"enter size"<<endl;
    int n;
    cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
cout<<"enter money"<<endl;
cin>>m;
sort(arr.begin(),arr.end());
int i=0;
int count=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]%5==0){
    count++;
    }
    else if(m>0){
    m-=arr[i];
    count++;
    }
}
cout<<count;
}