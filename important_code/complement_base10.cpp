#include<iostream>
using namespace std;

int bitwiseComplement(int n){
    int m=n;
    int mask=0;

    while(m!=0){
m=m>>1;
mask=(mask<<1)|1;
    }

    int ans=(~n)&mask;
    return ans;
}

int main(){
int n=2;
cout<<bitwiseComplement(n)<<endl;
}