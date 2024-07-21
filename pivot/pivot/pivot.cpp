// pivot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//**finding the position of pivot element*************************--------------->>>>>>>>>>>>>>>>>>>>>>>>>>
//int pivotElement(int arr[], int size) {
//	int start = 0;
//	int end = size - 1;
//	int mid = start + (end - start) / 2;
//	while (start < end) {
//		if (arr[mid] >= arr[0]) {
//			start = mid + 1;
//		}
//		else {
//			end = mid;
//		}
//		mid= start + (end - start) / 2;
//	}
//	return start;
//}
//int main() {
//	int arr[6] = { 3,5,6,7,1,2 };
//	cout << "pivot" << pivotElement(arr, 6);
//
//}
//************find rotated sorted array
// 
// 
// -------------->>>>..time complexity=0log(n)
// 
// 
// 
//int binarySearch(int hurr[], int s,int e,int key) {
//	int start = s;
//	int end = e;
//	int	mid = start + (end-start) / 2;
//	///this is also equal to start+end/2 
//	while (start <= end) {
//		if (hurr[mid] == key) {
//			return mid;
//		}
//		if (key > hurr[mid]) {
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//		}
//		mid = (start + end) / 2;
//	}
//	return -1;
//}
//
//
//int pivotElement(int arr[], int size) {
//	int start = 0;
//	int end = size - 1;
//	int mid = start + (end - start) / 2;
//	while (start < end) {
//		if (arr[mid] >= arr[0]) {
//			start = mid + 1;
//		}
//		else {
//			end = mid;
//		}
//		mid = start + (end - start) / 2;
//	}
//	return start;
//}
//
//int findPosition(int arr[],int size,int k ) {
//	int pivot = pivotElement(arr,size);
//	if (k >= arr[pivot] && k <= arr[size - 1]) {
//		return binarySearch(arr,pivot, size-1, k);
//	}
//	else {
//		return binarySearch(arr, 0, pivot - 1, k);
//	}
//	
//}
//int main(){
//	int arr[4] = {9,8,3,4};
//	cout << "index of 8" << findPosition(arr, 4, 1);
//}
