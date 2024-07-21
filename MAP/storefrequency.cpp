#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    //implementation fro finding frequency

unordered_map<int,int>freq;
int arr[10]={1,3,42,121,4,2,1,1,1,3};
for(int i=0;i<10;i++){
int key=arr[i];
    freq[key]++;
}

for(auto itr=freq.begin();itr!=freq.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
}
