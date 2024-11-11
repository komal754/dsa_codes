#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

// // Function to maximize the product of splits of a number n

int maxProduct(int n) {
    if (n == 2 || n == 3) 
        return n - 1;  // Special case for n = 2 and 3

    int product = 1;
    while (n > 4) {
        product *= 3;
        n -= 3;
    }
    return product * n;  // Multiply the last remainder 4 or 2
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Maximum product of parts: " << maxProduct(n) << endl;
    return 0;
}


//if given split into two number
   // int main()
//     {
//     int n;
//     cin>>n;
//        if (n == 2) {
//         cout << "1" << endl;
//         return 0;
//     }
//     if (n == 3) {
//         cout << "2" << endl;
//         return 0;
//     }
//     int s=1;
//     int e=n-1;
//     int sum=0;
//     int product=0;
//     int maxi=0;
//     while(s<e){
//         sum=s+e;
//         if(sum>n){
//             e--;
//         }
//         if(sum<n){
//             s++;
//         }
//         if(sum==n){
//             product=s*e;
//             maxi=max(product,maxi);
//             s++;e--;
//         }
//     }

//     cout<<maxi;



// }