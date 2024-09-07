#include<iostream>
#include<vector>
using namespace std;
int countSetBits(int n) {
    // Write your code here
    int sum=0;

    vector<int>binary;
    for(int i=0;i<n;i++){
        int count=0;
            int k=0;
while(i>0){
    binary[k]=i%2;
    if(binary[k]==1)count++;
    k++;
    i/=2;
}
sum+=count;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int result=countSetBits(n);
    cout<<result;

}