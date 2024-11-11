#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=arr[0];
    int maxi=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    
    cout<<"minimum element:  "<<mini<<endl;
    cout<<"maximum element:  "<<maxi<<endl;


    // priority_queue<int> maxi;
    // priority_queue<int, vector<int>, greater<int>> mini;

    // for(int i=0;i<n;i++){
    //     mini.push(arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     maxi.push(arr[i]);
    // }

    // cout<<"minimum element:  "<<mini.top()<<endl;
    // cout<<"maximum element:  "<<maxi.top()<<endl;
}