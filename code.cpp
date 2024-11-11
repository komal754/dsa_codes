#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,h=n-1;
while(l<h){
    int temp=arr[l];
    arr[l]=arr[h];
    arr[h]=temp;
    l++;
    h--;
}
cout<<"reverse array sum at even: "<<endl;
int sum=0;
    for(int i=0;i<n;i=i+2){
        sum+=arr[i];
    }
cout<<sum;
}