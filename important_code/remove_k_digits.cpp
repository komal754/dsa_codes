    // string removeKDigits(string num, int k) 
    // {
    //     // Write your code here.

    // stack<char>s;
    // string ans="";

    // for(int i=0;i<num.size();i++){

    // while(!s.empty() && s.top()>num[i] && k){
    //     s.pop();
    //     k--;
    // }

    // if(!s.empty()||num[i]!='0'){
    //     s.push(num[i]);
    // }
    // }

    // while(!s.empty() && k){
    //     s.pop();
    //     k--;
    // }

    // if(s.empty()){
    //     return "0";
    // }

    // while(!s.empty()){
    //     ans=s.top()+ans;
    //     s.pop();
    // }
    // return ans;

    // }


#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Input string and number of digits to remove
    string num;
    int k;

    // Example inputs
    num = "1432219"; // You can change this to test different cases
    k = 3;           // You can change this to test different cases

    stack<char> s;
    
    for (char digit : num) {
        while (!s.empty() && s.top() > digit && k > 0) {
            s.pop();
            k--;
        }
        // Skip leading zeros
        if (!s.empty() || digit != '0') {
            s.push(digit);
        }
    }
    
    // Remove remaining digits if k > 0
    while (!s.empty() && k > 0) {
        s.pop();
        k--;
    }
    
    // Build the result string
    string ans = "";
    while (!s.empty()) {
        ans = s.top() + ans;
        s.pop();
    }
    
    // Handle case where result is empty
    if (ans.empty()) {
        ans = "0";
    }

    // Output the result
    cout << "Result: " << ans << endl;

    return 0;
}
