#include<iostream>
#include<vector>
using namespace std;

int main(){
cout<<"enter n1 & n2"<<endl;
int n1,n2;
cin>>n1>>n2;
vector<int>arr1(n1);
vector<int>arr2(n2);

cout<<"enter first sorted array"<<endl;
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}

cout<<"enter second sorted array"<<endl;
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}
int i=0,j=0;

vector<int>ans;
while(i<n1 && j<n2)
{
    if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else{
        j++;
    }
}
cout<<"intersection of array: "<<endl;
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" |";
}
return 0;
}