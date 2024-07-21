
#include <iostream>
using namespace std;


// program to  find the square root of entered number--------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//long long int binarySearch(int n) {
//	int s = 0;
//	int e = n;
//	int mid = s + (e - s) / 2;
//	long long int ans = -1;
//	while (s <= e) {
//		long long int square = mid * mid;
//		if (square == n) {
//			return mid;
//		}
//		if (square < n) {
//			ans = mid;
//			s = mid + 1;
//		}
//		else {
//			e = mid - 1;
//		}
//		mid = s + (e - s) / 2;
//	}
//}
//int main() {
//	/*= sqrt;*/
//	int n;
//	cout << "enter n";
//	cin >> n;
//	cout << binarySearch( n);
//}


//for precision refer to lecture::::14 of babbar

//
// lecture 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//question??? to find the no. of minimum books that each students can get
//n:no. of books 
//m:no. of students
int allocateBooks(int arr[], int n, int m) {
	int s = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s + (e - s) / 2;
	while (s < e) {
		if (arr, n, m, mid) {
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
int main() {
	int arr[5] = { 3,6,7,8,9 };
	int n, m;
	cin >> n;
	cin >> m;
	cout << allocateBooks(arr, n, m);

}
















