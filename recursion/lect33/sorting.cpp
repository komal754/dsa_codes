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

bool isSorted(int arr[],int n){
    if(n==0||n==1){return true;}
    if(arr[0]>arr[1])
    {return false;}
    return isSorted(arr+1,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    if(isSorted(arr,n)){
        cout<<"sorted array";
    }
    else {
        cout<<"not sorted";
    }
    
}