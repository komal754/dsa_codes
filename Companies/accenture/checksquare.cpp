#include<iostream>
using namespace std;

int main(){

int x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1>>x2>>y2;

if(abs(x2-x1)!=abs(y2-y1)){
    cout<<-1;
}
else{
x3=x1;
y3=y1+y2;
x4=x1+x2;
y4=y1;
cout<<x3<<y3<<x4<<y4;
}
}