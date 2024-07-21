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

bool search(int arr[],int n,int key){
    if(arr[0]==key){return true;}else{return false;}
    return search(arr+1,n-1,key);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    int key;
    cout<<"enter key "<<endl;
    cin>>key;
   if(search(arr,n,key)){
    cout<<"found";
   }
   else {cout<<"not found";}
    
    
}
