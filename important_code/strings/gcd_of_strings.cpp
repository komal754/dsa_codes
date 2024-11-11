#include<iostream>
#include<algorithm>
using namespace std;


string gcd(string s1,string s2){

if(s1+s2==s2+s1){
    return s1.substr(0,gcd(s1.length(),s2.length()));
}

else{
    return "";
}

}