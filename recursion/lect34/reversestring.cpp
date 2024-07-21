#include<iostream>
using namespace std;

void reverseString(string &s,int i,int j){
    cout<<"call received for str : "<<s<<endl;
if(i>j)return;
swap(s[i],s[j]);
i++;
j--;
reverseString(s,i,j);

}


int main(){
   string name;
   cout<<endl;
   cout<<"enter youtr name: "<<endl;
   cin>>name;
  reverseString(name,0,name.length()-1);
   cout<<"reversed string: "<<endl<<name<<endl;
    return 0;
}