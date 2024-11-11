#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    }
