#include <bits/stdc++.h> 
#include<vector>
using namespace std;


void solve(string str,int index,string output,vector<string >&ans){
//base

if(index>=str.length()){
if(output.length()>0){
	ans.push_back(output);

}
	return ;
}
//exclude
solve(str,index+1,output,ans);

//incude
char element=str[index];
output.push_back(element);

solve(str,index+1,output,ans);

}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string>ans;
	string output="";
	int index=0;
	solve(str,index,output,ans);
	return ans;

}
int main() { 
    string str = "abc"; // Example input
    vector<string> result = subsequences(str);

    // Output the result
    cout << "Subsequences: " << endl;
    for (const auto &subsequence : result) {
        cout << subsequence << endl;
    }

    return 0;
}
