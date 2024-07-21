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

int sum(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return arr[0]+ sum(arr+1,n-1);
}
int main(){
   int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    cout<<sum(arr,n);

}