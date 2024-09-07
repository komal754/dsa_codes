#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    cout<<"enter the size of array"<<endl;
int n;
cin>>n;
    cout<<"enter element"<<endl;
    vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

unordered_map<int,int>map;
for(int i=0;i<n;i++){
    map[arr[i]]++;
}
int maxi=0;
int maxele=0;
for(auto freq:map){
    cout<<"key: "<<freq.first<<"  frequency: "<<freq.second<<endl;
    if(freq.second>maxi){
        maxi=freq.second;
        maxele=freq.first;
    }
}
cout<<" maximum occurence is of element: "<<maxele;
}
