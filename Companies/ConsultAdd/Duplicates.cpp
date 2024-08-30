//  The principal has a problem with repetitions. Everytime someone sends the same 
//  email twice he becomes angry and starts yelling. His personal assistant filters 
//  the mails so that all the unique mails are sent only once, and if there is someone 
//  sending the same mail again and again, he deletes them. Write a program which will 
//  see the list of roll numbers of the student and find how many emails are to be deleted.

// Sample Input:
//     6
//     1
//     3
//     3
//     4
//     3
//     3

// Sample Output:
//     3

#include<bits/stdc++.h>
using namespace std;

void input( vector<int>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
   vector<int>arr(n);
    input(arr,n);

 sort(arr.begin(),arr.end());
int count=0;
for(int i=1;i<n;i++){
    if(arr[i]==arr[i-1]){
count++;
    }
}
cout<< count;
return 0;
}



// int main(){
// int n,a,ans=0;
// cin>>n;
// unordered_map<int,int>frq;
// while(n--){
//     cin>>a;
//     frq[a]++;
// if(frq[a]>1)ans++;

// }
// cout<< ans;
// }