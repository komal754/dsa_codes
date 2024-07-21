#include<iostream>
using namespace std;
  uint32_t rev(uint32_t n) {
        uint32_t rev=0;
        for(int i=0;i<=31;i++){
            rev<<=1;
            rev=rev+(n&1);
            n>>=1;
        }
        return rev;
    }
int main(){
   uint32_t n;
    cin>>n;
cout<<rev(n);
}