
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int s,int e){
int mid=s+(e-s)/2;
int len1=mid-s+1;
int len2=e-mid;

//create two half parts of arrays 
int *first=new int[len1];
int *second=new int[len2];

//copy value
int arraymainIndex=s;
for(int i=0;i<len1;i++){
    first[i]=arr[arraymainIndex++];
}
 arraymainIndex=mid+1;

for(int i=0;i<len2;i++){
    second[i]=arr[arraymainIndex++];
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

void solve(vector<int>&arr,int s,int e){
int mid=s+(e-s)/2;

if(s>=e)return ;

//for right wala part
solve(arr,mid+1,e);

//for left wala part
solve(arr,s,mid);
merge(arr,s,e);

}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    solve(arr,0,n-1);
    
}