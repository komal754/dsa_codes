#include<iostream>
using namespace std;

/* ------------------------------BASIC RECURSION PRACTICE CODE-------------------------------------*/
//FACTORIAL:->
/*  int factorial(int n){
if(n==0)return 1; 
 return n*factorial(n-1); 
//  int choti=factorial(n-1);
// int badi=n*choti;
// return badi;
}
int main(){
    int n;
    cin>>n;
    cout <<factorial(n);
}  */

//COUNT:
int count(int n){
if(n<0){
    return 0 ;
}
    //recursive relation
 count(n-1);
cout<<n<<endl;

}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
}

//REACH HOME
/* int reachHome(int src,int dest){

    cout<<"src "<<src<<"  dest "<<dest<<endl;
        if(src==dest){
        return 0;
    }
    // src++;
    reachHome(src+1,dest);

}
int main(){
    int src=1,dest=10;
    reachHome(src,dest);
} */

//FIBBONACII
/* 
int fib(int n)
{
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
 
}
int main(){
    int n ;
    cin>>n;
    cout<<fib(n);
} */