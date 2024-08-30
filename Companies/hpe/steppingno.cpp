#include <iostream>
using namespace std;

bool isStepnum(int n){
    int prev=-1;

    while(n!=0){
        int curr=n%10;
       if(prev==-1){
        prev=curr;
       }
       else{
        if(abs(curr-prev)!=1){
            return false;
        }
       }
       prev=curr;
       n/=10;
    }
    return true;
}
int print(int n,int m){

for(int i=n;i<=m;i++){
    if(isStepnum(i)){
        cout<<i<<" ";
    }
}
}

int main(){
    int n;
    int m;
    cout<<"enter n and m"<<endl;
    cin>>n>>m;

    print(n,m);
    return 0;
}


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n = 100, m = 200;

//     // Iterate through the range [n, m]
//     for (int i = n; i <= m; i++) {
//         int num = i;
//         int prevDigit = -1;
//         bool isStepping = true;

//         // Loop through each digit of the number
//         while (num) {
//             int curDigit = num % 10;  // Get the current digit

//             if (prevDigit == -1) {
//                 prevDigit = curDigit;  // Set prevDigit to curDigit initially
//             } else {
//                 // Check if the absolute difference between the current digit and the previous digit is 1
//                 if (abs(prevDigit - curDigit) != 1) {
//                     isStepping = false;  // If not, set isStepping to false
//                     break;  // No need to check further, exit the loop
//                 }
//                 prevDigit = curDigit;  // Update prevDigit to the current digit
//             }

//             num /= 10;  // Remove the last digit from the number
//         }

//         // If the number is a Stepping Number, print it
//         if (isStepping) {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }
