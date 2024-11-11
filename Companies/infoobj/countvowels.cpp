#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
unordered_set<char>vowels={'a','e','i','o','u'};
string s;
cout<<"enter string:"<<endl;
cin>>s;
int count =0;
for(auto x: s){
if(vowels.find(x)!=vowels.end()){
    count++;
}
}
cout<<"vowels count:"<<count;
}