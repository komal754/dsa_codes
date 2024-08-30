#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    // to find no. of 0 :find no. of 5's  in product from 1to5
    int n;
    cin>>n;
    int cnt =0;
    while (n >= 5)
    {
        cnt += (n / 5);
        n /= 5;
    }
}