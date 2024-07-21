#include<iostream>
using namespace std;
int getMax(int &a,int &b){
    return (a>b)?a:b;
}
int main(){
    int a=1;
    int b=6;
    int ans=getMax(a,b);
    cout<<ans;
}