#include<iostream>
using namespace std;

int main(){
int cap,total;
cout<<"enter capacity: " <<endl;
cin>>cap;
cout<<"enter total: " <<endl;
cin>>total;
int quo=total/cap;
if(total%cap==0){
cout<<quo<<endl;
}
else{
    cout<<quo+1;
}
}