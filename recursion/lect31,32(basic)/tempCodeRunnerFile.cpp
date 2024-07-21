#include<iostream>
using namespace std;
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
