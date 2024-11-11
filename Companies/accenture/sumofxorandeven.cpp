#include<iostream>
#include<vector>

using namespace std;
int main(){
int n;
cin>>n;
vector<int >arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i=i+2){
    sum+=arr[i];
}
int xord=0;

for(int i=1;i<n;i=i+2){
xord^=arr[i];
}
cout<<"sum: "<<xord+sum;


}