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
int selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++)
{
        int minIndex=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
           swap(arr[minIndex],arr[i]);

        }
        
    }
    // swap(arr[minIndex],arr[i]);
}   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    selectionSort(arr,n);
    print(arr,n);
}

