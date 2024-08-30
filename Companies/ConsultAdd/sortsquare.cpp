//Problem Description :

// You are given an array of integers in non-decreasing order. Your task is to sort the array 
// after converting each element to its square.

// Write a function ‘sortArrayAfterSquaring’ that takes an array of integers as input and 
// returns the sorted array after converting each element to its square.

// For example
// Input: [1, 2, 3, 4, 5]
// Output: [1, 4, 9, 16, 25]
// Explanation:
// In this example, the input array is [1, 2, 3, 4, 5]. After squaring each element, 
// we get [1, 4, 9, 16, 25]. The resulting array is then sorted in ascending order, 
// which gives [1, 4, 9, 16, 25]. Finally, the sorted array is printed.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&arr,int n){
for(int i=0;i<n;i++){
    cin>>arr[i];
}
}
void print(vector<int>&arr,int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int n;
cin>>n;
vector<int>arr(n);
input(arr,n);
vector<int>square;
for(int i=0;i<n;i++){
    square.push_back(arr[i]*arr[i]);
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(square[j]>square[j+1]){
            int temp = square[j];
            square[j] = square[j+1];
            square[j+1] = temp;
        }
    }

}
    cout<<"Sorted array is: ";
    print(square,n);
}