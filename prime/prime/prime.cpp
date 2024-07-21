// prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//
//bool isPrime(int n) {
//
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return 0 ;
//		}
//		else {
//			return 1;
//		}
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	if (isPrime(n)) {
//		cout << "prime";
//	}
//
//	else {
//		cout<<"not prime";
//	}
//}
//int Ap(int n) {
//	int ans;
//	for (int i = 1; i <= n; i++) {
//		ans = (3 * n) + 7;
//	}
//	return ans;
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << n << "th term is" << Ap(n);
//	return 0;
//}
//void Fibonacci(int n) {
//	int a,b, ans;
//	a = 0;
//	b = 1;
//	cout << a << "" << b;
//	for (int i = 0; i <= n; i++)
//	{
//		ans = a + b;
//		cout << ans;
//		a = b;
//		b = ans;
//
//	}
//	return;
//
//}
//int main()
//{
//	int n;
//	cin >> n;
//	 Fibonacci(n);
//}
//


//pass by value:::---------->>>>>>>
//void Update(int n) {
//	n = n / 2;
//	
//}
//int main(){
//int n = 8;
//Update( n);
//
//cout <<"value"<< n;
//}



//*********>>>>>>>ARRAYS:::

int main(){
	int first[8] = {1};
	int n = 8;
	for (int i = 0; i < n; i++)
	{
		cout << first[i]<<" ";
		
	}
	cout << "everything is fine";
}