   #include<iostream>
#include<vector>
using namespace std;
/* Function to check if a single number is prime */


bool validPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int countPrimes(int n) {
    if (n <= 2) return 0;  // No primes less than 2
    
    vector<bool> isPrime(n, true);  // Initialize boolean vector
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
    
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false; // Mark multiples of i as not prime
            }
        }
    }
    
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "isPrime" << n << " returns: " << (validPrime(n) ? "true" : "false") << endl;
    cout << "countPrimes(" << n << ") returns: " << countPrimes(n) << endl;
    
    return 0;
}

//main: