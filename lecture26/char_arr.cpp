#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    char ch[5]="hel";
    char *c=&ch[0];
    cout<<c;
    cout<<arr<<endl;
    cout<<ch<<endl; 

    char temp='z';
    char *p=&temp;
    cout<<p;
    
    return 0;
}