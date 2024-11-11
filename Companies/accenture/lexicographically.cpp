#include <iostream>
#include <string>
using namespace std;

void compareStrings(const string &str1, const string &str2) {
    if (str1 < str2) {
        cout << "\"" << str1 << "\" comes before \"" << str2 << "\" in lexicographical order." << endl;
    } else if (str1 > str2) {
        cout << "\"" << str1 << "\" comes after \"" << str2 << "\" in lexicographical order." << endl;
    } else {
        cout << "Both strings are equal." << endl;
    }
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    
    compareStrings(str1, str2);
    
    return 0;
}
