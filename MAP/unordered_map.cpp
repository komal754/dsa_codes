#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
unordered_map<string,int>map;
map["komal"]=23;
map["mehal"]=43;
map["nikhil"]=45;

/* for(auto x:map){
    cout<<x.first<<" "<<x.second<<endl;
}
 */
//alternate
for(auto itr =map.begin();itr!=map.end();itr++)
cout<<itr->first<<" "<<itr->second<<endl;

/* string name;
cout<<"enter"<<endl;
cin>>name; */
/* if(map.find(name)!=map.end()){
    cout<<"key found";
}
else{
    cout<<"not fond";
} */
string name;
cout<<"enter"<<endl;
cin>>name;
if(map.find(name)!=map.end())
{
    auto temp=map.find(name);
    cout<<"key : "<<temp->first<<endl;
    cout<<"value : "<<temp->second<<endl;
}
map.insert(make_pair("golu",23));
map.insert(make_pair("goli",100));

for(auto x : map){
cout<<x.first<<"  "<<x.second<<endl;
}

cout<<map.size();


}
