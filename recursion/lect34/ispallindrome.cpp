#include<iostream>
using namespace std;
bool isPallindrome(string str,int s,int e){
if(s>e){
    return true;
}
if(str[s]==str[e]){
    s++;
    e--;
}
else{return false;}
return isPallindrome(str,s,e);
}

int main(){
    string s;
    cout<<"enter a pallindrome to check"<<endl;
    cin>>s;
  
    if(isPallindrome(s,0,s.length()-1)){
        cout<<"it is pallindrome !"<<endl;
    }
     else{
        cout<<"it is not pallindrome !"<<endl;
    }
}