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
void insertionSort(int arr[],int n){
for(int i=0;i<n;i++){
    int temp=arr[i];
int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>arr[j+1])
        {
        arr[j+1]=arr[j];
        }
        else break;
    }
    arr[j+1]=temp;
}
}

int main(){
    int n;
    cin>>n;
    
}
