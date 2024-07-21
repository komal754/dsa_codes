
// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//*************switch case

#include <iostream>
using namespace std;

//int main() {
//    int num = 3;
//    switch (num) {
//    case 1:
//        cout << "one";
//        break;
//    case 3:
//        cout << "three";
//        break;
//
//    default:
//        cout << "not defined";
//        break;
//
//    }
//    return 0;
//}
//************simple calculator:
//int main()
//{
//	char op;
//	int a, b;
//	cout << "enter a \n";
//	cin >> a;
//
//	cout << "enter b \n";
//	cin >> b;
//	cin >> op;
//	switch (op) {
//	case '-':
//		cout << a-b;
//		break;
//	case '%':
//		cout << a%b;
//		break;
//
//	case '/':
//		cout << a/b;
//		break;
//
//	case '+':
//		cout << a+b;
//		break;
//	default:
//		cout << "operator invalid";
//
//	}
//	return 0;
//
//	}
//

//


//********to find no. of notes of given value
//int main() {
//	int n100, n50, n20, n1;
//	 n100=n50=n20= n1 = 0;
//	int num ;
//	cin >> num;
//	
//	switch (num>=100) {
//	case 1:
//		
//		n100= num / 100;
//		num -= n100 * 100;
//		break;
//	}
//	switch (num >= 50) {
//	case 1:
//		n50 = num / 50;
//		num -= n50 * 50;
//		break;
//	}
//	switch (num >= 20) {
//	case 1:
//		n20 = num / 20;
//		num -= n20 * 20;
//		break;
//	}
//	switch (num >= 1) {
//	case 1:
//		n1 = num / 1;
//		num -= n1 * 1;
//		break;
//	}
//	cout << "100 ruppes notes=" << n100<<endl;
//	cout << "50 ruppes notes=" << n50 << endl;
//	cout << "20 ruppes notes=" << n20 << endl;
//	cout << "1 ruppes notes=" << n1 << endl;
//}
	
//*********creATING THE FUNCTION TO CHECK WHETHER THE NUMBER IS ODD OR EVEN--->>>>>>>
//even:1
//odd:0
//bool isEven(int a){
//	if (a & 1) {
//		//odd
//		return 0;
//	}
//	else {
//		//even
//		return 1;
//	}
//}
//
//int main() {
//	int num;
//	cin >> num;
//	if (isEven(num)) {
//		//even
//		cout << "even no.";
//	}
//	else {
//		//odd
//		cout << "odd number" << endl;
//	}
//	
//}
int factorial(int n) {
	int fact = 1;

	for (int i = 1; i <=n ; i++) {
		fact =fact* i;
		}
	return fact;
}
int nCr(int n, int r) {
	int num = factorial(n);
	int denom = factorial(r) * factorial(n - r);
	 return num / denom;
}
int main() {
	int n,r;
	cout << "n";
	cin >> n;
	cout << "r";
	cin >> r;

	cout << nCr(n,r);
	
}



