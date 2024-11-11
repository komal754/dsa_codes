#include<iostream>
using namespace std;

int main(){
    string s="",substr="";
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<"enter substr"<<endl;
    cin>>substr;

    while(s.length()!=0 && s.find(substr)<s.length()){
        s.erase(s.find(substr),substr.length());
    }
cout<<s;
}