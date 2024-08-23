#include<iostream>

using namespace std;

int findUnique(int *arr, int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}

int main(){
    int arr[]={1,4,2,4,5,5,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<findUnique(arr,size);
}
