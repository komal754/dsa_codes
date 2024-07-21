#include<iostream>
using namespace std;
//mentioned form right side
void print(int arr[],int size,int start=2){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[6]={4,3,2,5,5,8};
    print(arr,6);  //default called
    print(arr,6,4);
 
}