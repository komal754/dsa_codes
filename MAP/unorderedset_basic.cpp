#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(3);
    s.insert(15);
    s.insert(10);
    s.insert(4);
    //it iterator pointer
for(auto it=s.begin();it!=s.end();it++)
{
    cout<<"value:"<<*it<<endl;
}
cout<<endl;
    cout<<"size : "<<s.size()<<endl;
    /* s.clear(); */
/*     cout<<"size : "<<s.size()<<endl; */

cout<<endl;

//to find a key
int key;
cout<<"enter the key to found : "<<endl;
cin>>key;

/* if(s.find(key)==s.end()){
    cout<<"key not found"<<endl;
}
else cout<<"key found "<<endl;
 */
//or

if(s.find(key)!=s.end()){
    cout<<"Key found";
}

//deleted
int del=4;
s.erase(del);
for(auto it=s.begin();it!=s.end();it++)
{
    cout<<"value:"<<*it<<endl;
}

s.insert(2);
s.insert(2);
s.insert(2);
if(s.count(4)){
    cout<<"found";
}


}