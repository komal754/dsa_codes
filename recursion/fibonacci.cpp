#include<iostream>
using namespace std;


int fib(int n){

if(n==0){
    return 0;
}
if(n==1){
    return 1;
}


return fib(n-1)+fib(n-2);


}

void print(int n){
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
cout<<"printing"<<endl;

    print(n);
}