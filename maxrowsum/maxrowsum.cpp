// lecture23.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

//void rowSum(int arr[][4], int row, int column) {
//
//	for (int row = 0; row < 3; row++) {
//		int sum = 0;
//		for (int column = 0; column < 4; column++) {
//			sum += arr[row][column];
//		}
//		cout << sum << " ";
//	}
//	cout << endl;
//
//
//}
int MaxrowSum(int arr[][4], int row, int column) {
	int maxi = INT_MIN;
	for (int row = 0; row < 3; row++) {
		int sum = 0;
		for (int column = 0; column < 4; column++) {
			sum += arr[row][column];
		}
		if (sum > maxi) {
			maxi = sum;
			int rowindex = row;
		}
	}
	cout << "max sum is:" << maxi << endl;

	return row;


}
int main()
{
	int arr[3][4] = {};
	//for row-wise sum;->

	cout << "enter" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	//print

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	std::cout << "sum=" << endl;
	//rowSum(arr, 3, 4);
	MaxrowSum(arr, 3, 4);

	return 0;
}

