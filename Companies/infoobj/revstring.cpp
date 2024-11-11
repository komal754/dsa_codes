#include<iostream>
using namespace std;

int main(){
    string string;
    cout<<"enter string";
    cin>>string;

    int s=0;
    int e=string.size()-1;

    while(s<e){
        char temp=string[s];
        string[s]=string[e];
        string[e]=temp;
        s++;
        e--;
    }
cout<<endl;
    cout<<"reversed string:   "<<string;
}