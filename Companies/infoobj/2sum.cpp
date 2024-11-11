#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size of array: "<<endl;
cin>>n;
int arr[n];

cout<<"enter elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int reqsum;
cout<<"enter target sum"<<endl;
cin>>reqsum;

int s=0,e=n-1;

while(s<e){
int sum=arr[s]+arr[e];

if(sum==reqsum){
    cout<<arr[s]<<":"<<arr[e]<<endl;
    s++;
    e--;
}

else if(sum>reqsum){
    e--;
}
else s++;

}

}