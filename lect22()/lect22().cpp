// lect22().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getLength(char ch[]) {
    int count = 0;
    for (int i = 0; ch[i] != ' \0'; i++) {
        count++;

    }
    return count;
};



int main()
{

    char ch[10];
   
     cin>>ch;
    //ch[3] = '\0';
   cout << ch;

    cout << "length is" << getLength(ch);
    
  

}

