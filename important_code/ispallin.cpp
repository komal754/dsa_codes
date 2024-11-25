
#include <iostream>
using namespace std;

bool isPallindrome(string s)
{

    int start = 0;
    int e = s.size() - 1;

    while (start<=e)
    {
       
       if(s[start]==s[e]){
        start++;
       e--;
        
       }
       else 
       return false;
       
    }
    return true;
}
int main()
{
    string s;
    cin >> s;

    if(isPallindrome(s)){
        cout<<"it is  pallindrome"<<endl;
    }
    else
    {
        cout<<"it is  not pallindrome"<<endl;
    }
}