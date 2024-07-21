// lect22().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



char toLowercase(char ch) {

    if (ch >= 'a' && ch <= 'z') {
        return ch;

    }

    if (ch >= 'A' && ch <= 'Z') {

        char temp = ch - 'A' + 'a';
        return temp;
    }


}
int getLength(char ch[]) {
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        count++;
     }
    return count;
}

void reverseString(char ch[],int n) {
    int s=0;
    int e=n-1;
    while (s < e) {
        swap(ch[s++], ch[e--]);
    }
   
}
bool checkPallindrome(char a[],int n){
    char toLowercase(char ch);

    int s = 0;
int e = n - 1;

while (s <= e) {

    if (toLowercase(a[s]) != toLowercase(a[e])) {
        return false;
    }
    else {
        s++;
        e--; 
    }
}
return true;
}



int main()
{

    char ch[10];
    cin >> ch;
    //ch[3] = '\0';
    cout << ch<<endl;
    cout << "length is" << getLength(ch)<<endl;
    int len = getLength(ch);
    reverseString(ch,len);
    cout << "reverse of string:->";
    cout<<ch << endl;
    cout << "pallindrome or not->" << checkPallindrome(ch, len) << endl;
    return 0;
}

//leet code::::::::::::::::::::::::;->>>>>>>>.....
//
//
//class Solution {
//private:
//
//    bool validChar(char ch) {
//        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9') {
//            return 1;
//        }
//        return 0;
//    }
//    // bool valid(char ch) {
//    //     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
//    // }
//
//
//    char toLowercase(char ch) {
//        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9') {
//            return ch;
//        }
//        else {
//            char temp = ch - 'A' + 'a';
//            return temp;
//        }
//    };
//
//    bool validpalindrome(string a) {
//        int s = 0;
//        int e = a.length() - 1;
//
//        while (s <= e) {
//            if (a[s] != a[e]) {
//                return 0;
//            }
//            else {
//                s++;
//                e--;
//            }
//        }
//        return 1;
//    }
//public:
//    bool isPalindrome(string s) {
//        string temp = "";
//
//        for (int j = 0; j < s.length(); j++) {
//            if (validChar(s[j])) {
//                temp.push_back(s[j]);
//            }
//        }
//        for (int j = 0; j < temp.length(); j++) {
//            temp[j] = toLowercase(temp[j]);
//        }
//        return validpalindrome(temp);
//    }
//
//};
