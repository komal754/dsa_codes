#include<iostream>
using namespace std;

int operate(int x,int y){
    return x*y;
}
 float operate(float n,float m){
    return n/m;
 }
 int main(){
    int x=4,y=6;
    int n=5.0,m=1.0;
    cout<<operate(x,y);
    cout<<operate(n,m);
    return 0;
 }