#include<iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

bool binarySearch(int arr[],int s,int e,int k){
    if(s>e){return false;}
   int mid=s+(e-s)/2;
   if(k==arr[mid]){
    return true;
   }
   if(k>arr[mid]){
    return binarySearch(arr,mid+1,e,k);
   }
   if(k<arr[mid]){
    return binarySearch(arr,s,mid-1,k);
   }
   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    int k;
    cout<<"enter the key to be found"<<endl;
    cin>>k;
    // cout<<binarySearch(arr,0,n-1,k);
    if(binarySearch(arr,0,n-1,k)){
        cout<<"key found in array";
    } 
    else {
        cout<<"not found";
    }
    
}