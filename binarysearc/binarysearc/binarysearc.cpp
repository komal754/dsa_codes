// binarysearc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int binarySearch(int hurr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int	mid = start + end / 2;
	///this is also equal to start+end/2 
	while(start<=end){
	if (hurr[mid] == key) {
		return mid;
	}
	if (key>hurr[mid] ) {
		start = mid + 1;
	}
	else {
		end = mid - 1;
	}
	mid = (start + end)/ 2;
	}
	return -1;
}
int main()
{
	int even[6] = { 2,6,8,18,22,24 };
	int evenIndex = binarySearch(even, 6, 22);
	cout << "index of 22 is" << evenIndex<<endl;
	return 0;
}
