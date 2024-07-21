
//string stream : 
/* This enables the extraction of words from the string one by one, 
ignoring any extra spaces. */
/* The ss >> word operation extracts the next word from the stream ss and
 stores it in the variable word. 
It skips any whitespace and handles multiple spaces automatically. */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string reverseString(string &str) {
  stringstream ss(str);
  string tempword;
  string ans;

  while (ss >> tempword) {
    if (!ans.empty()) {
      ans = tempword + " " + ans;
    } else {
      ans = tempword;
    }
  }
  return ans;
}

int main() {
  string str = "  Welcome  to   Coding Ninjas  ";
  cout << "Original String: \"" << str << "\"" << endl;
  cout << "Reversed String: \"" << reverseString(str) << "\"" << endl;
  return 0;
}