#include<iostream>
using namespace std;

int stringfirstoccurence(string haystack,string needle){

    if(needle.size()>haystack.size()){
        return -1;
    }
     
     for(int i=0;i<haystack.size()-needle.size();i++){
        if(haystack.substr(i,needle.length())==needle){
            return i;
        }
     }
    
    return -1;

}
int main(){
    string haystack="mynameis";
    string needle="nam";
    cout<<stringfirstoccurence(haystack,needle)<<endl;
}