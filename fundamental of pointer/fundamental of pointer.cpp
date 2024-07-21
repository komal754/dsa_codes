// fundamental of pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<malloc.h>
using namespace std;


	//...............simple..................


	/*int num = 5;
	int *ptr = &num;
	cout << "value of ptr" << ptr<<endl;
	cout << "value of *ptr" << *ptr;*/

	//.............................................ARRAYS...........................

	//int arr[] = { 1,2,3,4,5,6,7 };
	//int *ptr = arr;
	//cout << *(ptr+2) << endl;/*::->>>>3*/
	//cout << ptr << endl;
	//cout << (ptr + 1); /* address incremented by 4*/


	//int arr[] = { 11,33,43,32,32 };
	//int* p1 = &arr[0];
	//cout << p1;   /*:address random*/
	//cout << *p1;  /*:11*/


	//...............EXTRA......................................
//void incrementedByValue(int x) {
//	x++;
//};
//	void incrementedByPointer(int *ptr) {
//		(*ptr)++;
//	}
//	int main() {
//		int num1 = 5, num2 = 5;
//		incrementedByValue(num1);     /*:5*/
//		incrementedByPointer(&num2);     /*:6*/
//
//		cout << num1 << num2;
//		return 0;
//	}



	

	//...........................MALLOC..............................
int main() {
	void* ptr = malloc(sizeof(int));
	cout << ptr;
	free(ptr);
	return 0;
	}





