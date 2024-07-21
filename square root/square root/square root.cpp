// square root.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long int binarySearch(int n) {
	int s = 0;
	int e = n;
	long long int  ans = -1;
	long long mid = s + (e - s) / 2;
	////long long is added to remove the error of exceeding value od square than 32 bits
	while (s <= e) {
		long long   int square = mid * mid;
		if (square == n) 
			return mid;
		
		
	long long int  mid=s+(e-s)/2;
			if (square > n)
			{
				ans = mid;
				
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
			mid = s + (e - s) / 2;
		
	}
	return ans;
}
double morePrecise(int n,int precision,int tempSoln)
{
	double factor = 1;
	double ans = tempSoln;

	for (int i = 0; i < precision; i++) {
		factor = factor / 10;
		for (double j = ans ; j * j < n ; j=j+factor) {
			ans = j;
		}
	}
	return ans; 

}

int main() {
	int n;
	cout << "enter the number"<<endl;
	cin >> n;
	int tempSoln = binarySearch(n);
	cout << "sqr rt." << morePrecise( n, 3, tempSoln);
	return 0;
}
