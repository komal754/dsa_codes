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
void selecsort(int arr[],int n,int index=0){
   
//base condition: if reaches end position
   if(index==n-1){return;}
   int minIndex=index;
      for (int i=index+1;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
      }
          swap(arr[index],arr[minIndex]);
          selecsort(arr,n,index+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    selecsort(arr,n);
    print(arr,n);
}