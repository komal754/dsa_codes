#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n) {
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
    vector<bool> isPrime(n, true);
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
            for (long long j = (long long)i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "isPrime(" << n << " returns: " << (isPrime(n) ? "true" : "false") << endl;
    cout << "countPrimes(" << n << ") returns: " << countPrimes(n) << endl;
    
    return 0;
}
