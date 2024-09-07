#include <iostream>
using namespace std;

int main()
{
    // string str = "";
    // cout << "enter the string" << endl;
    // // cin>>str;
    // getline(cin, str);

    // string revesed_str;
    // int n = str.size();

    // for (int i = 0; i < n; i++)
    // {
    //     revesed_str = str[i] + revesed_str;
    // }

    // cout << "reversed string: ->" << endl;
    // cout << revesed_str;
    // return 0;


    //-------------------------------alternate--------------------
    
string str="";
cin>>str;
int n=str.length();
string rev_str="";
for(int i=n-1;i>=0;i--){
rev_str=rev_str + str[i];
}
cout<<"reversed string is "<<rev_str;
}
// using stack
