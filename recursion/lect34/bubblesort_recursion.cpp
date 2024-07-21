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

void sortArr(int arr[],int n){
    if(n==0||n==1){return ;}
    for(int i=0;i<n;i++)
    {
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
        }
    }
    return sortArr(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    sortArr(arr,n);
    print(arr,n);
}
//in nb

//selection ans insertion sort