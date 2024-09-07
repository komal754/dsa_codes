#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="";
getline(cin,str);
int n=str.length();
int maxi=0;
int num=0;
for(int i=0;i<n;i++){
    if(str[i]>='0' && str[i]<='9'){
num=num*10+(str[i]-'0');
maxi=max(num,maxi);
    }
else{
    num=0;
}
}
 std::cout<<maxi;
}