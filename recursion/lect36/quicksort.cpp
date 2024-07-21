#include<iostream>
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

int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right place
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part smbhalo

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<pivot){ i++;}
    while(arr[j]>pivot) {j--;}
      if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
     }
   
    }
    return pivotIndex;
}
void quickSort(int *arr,int s,int e){
    if(s>=e)return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    quickSort(arr,0,n-1);
    print(arr,n);
}