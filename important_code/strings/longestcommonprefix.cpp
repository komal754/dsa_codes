#include<iostream>
#include<vector>
using namespace std;
    // string longestCommonPrefix(vector<string>& arr) {
    //     int n = arr.size();
    //     string ans = "";

    //     for (int i = 0; i < arr[0].length(); i++)

    //     {

    //         char ch = arr[0][i];

    //         bool match = true;

    //         for (int j = 1; j < n; j++)

    //         {

    //             // if(arr[j].size() < i || ch!=arr[j][i])
    //             if (ch != arr[j][i]) {

    //                 match = false;

    //                 break;
    //             }
    //         }

    //         if (match == false)

    //         {

    //             break;

    //         }

    //         else

    //         {

    //             ans.push_back(ch);
    //         }
    //     }
    //     return ans;
    // }


string longestCommonPrefix(vector<string>&arr){
string prefix=arr[0];
int preflen =prefix.size();

for(int i=1;i<arr.size();i++){
    string s=arr[i];

    while(preflen>s.size()||prefix!=s.substr(0,preflen)){
     preflen--;

     if(preflen==0){
        return "";
     }
     prefix=prefix.substr(0,preflen);
    }
}
return prefix;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> arr(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string result = longestCommonPrefix(arr);
    
    if(result == "") {
        cout << "There is no common prefix." << endl;
    } else {
        cout << "The longest common prefix is: " << result << endl;
    }

    return 0;
}