#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
     fact*=i;
    }
    return fact;
}
int main(){
    string s;
    cin>>s;
    unordered_set<char>vowels;
    unordered_map<char,int>map;
        int count=0;
    vowels={'a','e','i','o','u'};
    for(int i=0;i<s.size();i++){
        char c=s[i];
    if(vowels.find(c)==vowels.end()){
    map[c]++;
    count++;
    }
    }

        if(count == 0) {
        cout << 0 << endl;
        return 0;
    }

    int numerator=factorial(count);
    int denominator=1;
    for(auto freq:map){
        denominator*=factorial(freq.second);
    }
    int ans=numerator/denominator;
    cout<<ans;
    return 0;
}
