//remove all the letters from string 1 that are present in str 2

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s1="";
    string s2="";
    cout<<"Enter the first string :"<<endl;
    cin>>s1;
    cout<<"Enter the second string :"<<endl;
    cin>>s2;

    int n1=s1.size();
    int n2=s2.size();
unordered_map<char,int>freq;
string ans="";
    for(int i=0;i<n2;i++){
     freq[s2[i]]++;
    }
    for(int i=0;i<n1;i++){
        if(freq.find(s1[i])==freq.end()){
ans+=s1[i];
        }
    }
    cout<<"The string after removing all the letters from string 1 that are present in str 2:"<<ans<<endl;
}