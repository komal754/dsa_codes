#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int>s;
s.push(4);
s.push(8);
s.push(6);
s.push(3);
s.push(1);
s.pop();
cout<<"top element of stack: "<<s.top()<<endl;
if(s.empty()){
    cout<<"stack is empty"<<endl;
}
else
cout<<"stack is not empty"<<endl;
cout<<"size of stack is "<<s.size()<<endl ;
}