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


void merge(int *arr,int s,int e){
int mid=s+(e-s)/2;
int len1=mid-s+1;
int len2=e-mid;

//create two half parts of arrays 
int *first=new int[len1];
int *second=new int[len2];

//copy value
int arraymainIndex=s;
for(int i=0;i<len1;i++){
    first[i]=arr[s+i];
}
 arraymainIndex=mid+1;

for(int i=0;i<len2;i++){
    second[i]=arr[mid+1+i];
}
//merge two arrays
int index1=0;
int index2=0;
arraymainIndex=s;

while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[arraymainIndex++]=first[index1++];
    }
    else{
        arr[arraymainIndex++]=second[index2 ++];
    }
}
while(index1<len1){
      arr[arraymainIndex++]=first[index1++];
}
while(index2<len2){
      arr[arraymainIndex++]=second[index2++];
}
delete []first;
delete []second;
}

void mergeSort(int *arr,int s,int e){

if(s>=e)return ;
int mid=s+(e-s)/2;

//for right wala part
mergeSort(arr,mid+1,e);

//for left wala part
mergeSort(arr,s,mid);
merge(arr,s,e);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    mergeSort(arr,0,n-1);
    print(arr,n);

}



