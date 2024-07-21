// arrayquestion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//yahoooo::::::::____------>>>>>>>>>



//***!!!!!!  reversing the array----->>>>>>>>>>>>>>>>
#include <iostream>
using namespace std;
//void reverse(int arr[], int n) {
//	int start = 0;
//	int end = n - 1;
//	for (int i = 0; i < n; i++) {
//		while (start <= end) {
//			swap(arr[start], arr[end]);
//			start++;
//			end--;
//		}
//	}
//}
//	void printArray(int arr[],int n){
//	
//		for (int i = 0; i < n; i++) {
//			cout << arr[i] << "  ";
//			}
//
//	cout << endl;
//	}
//
//		int main()
//	{
//		int hurr[5] = { 0,7,8,4,6 };
//		int furr[6] = { 6,-5,4,2,6,0 };
//
//		reverse(hurr, 5);
//		reverse(furr, 6);
//
//		printArray(hurr, 3);
//		printArray(furr, 4);
//	}




//**********bravo::::::::::::::::

//swapping altenate elments of array

//void reverse(int arr[], int n) {
//	int start = 0;
//	int end = n - 1;
//	for (int i = 0; i < n; i++) {
//		while (start <= end) {
//			swap(arr[start], arr[start+1]);
//			swap(arr[end], arr[end-1]);
//
//			start=start+2;
//			end=end-2;
//		}
//	}
//}
//void printArray(int arr[], int n) {
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << "  ";
//	}
//
//	cout << endl;
//}
//
//int main()
//{
//	int hurr[8] = { 0,7,8,4,6,9,4,5 };
//	int furr[5] = { 6,-5,4,2,6 };
//
//	reverse(hurr, 8);
//	reverse(furr, 5);
//
//	printArray(hurr, 8);
//	printArray(furr, 5);
//}


//finding unique elment in array:----->>>>>
//int findUnique(int arr[], int n) {
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		
//		ans = ans ^ arr[i];
//		
//
//	}
//	cout << ans;
//	
//}
//
//
//int main() {
//	int hurr[7] = { 4,5,6,7,6,4,5 };
//	findUnique(hurr, 7);
//	
//}

///counting number of occurence in array::::::::------------>
//
//int coutOccurence(int arr[],int n,int key)
//{
//	int res = 0;
//	for (int i = 0; i < n; i++) {
//		if (key == arr[i]) 
//			res++;
//			return res;
//		
//	}
//}
//
//int main() {
//	int arr[7] = { 4,5,3,4,4,3,9 };
//	int x=5;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	
//	cout<<coutOccurence(arr, 7, x);
//	return 0;
//}


