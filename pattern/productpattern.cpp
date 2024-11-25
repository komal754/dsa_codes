// Sample Output 0
// 12 * 10^1
// Explanation 
// 1*2*3*4*5=120 = 12 * 10^1
// Sample Input 1
// 3
// 10
// Sample Output 1
// 18144 * 10^2
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int product=1;
    for(int i=a;i<=b;i++){
        product*=i;
    }
    int count=0;
    while(product!=0){
        int digit=product%10;
        if(digit==0){
            count++;
            product/=10;
        }
        else{
            break;
        }
    }
    cout<<product<<"*10^"<<count;
}