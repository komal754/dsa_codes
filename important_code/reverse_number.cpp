#include<iostream>
using namespace std;

int rev(int n){
    int digit=0;
    int rev=0;

while(n!=0){
digit=n%10;
rev=(rev*10)+digit;
n=n/10;
}

return rev;
}
int main(){
   cout<< rev(3654);
    return 0;
}
