#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char find;
    cin>>find;
int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==find){
            count++;
        }
    }
    cout<<count;
}