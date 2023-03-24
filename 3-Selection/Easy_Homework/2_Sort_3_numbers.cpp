/*
 * 2_Sort_3_numbers.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "Enter 3 digits whitespace separated : ";
	cin >> a >> b >> c;
//	Solution number 1
//	if (a<b && a<c){
//		cout << "Sorted : " << a << " ";
//		if (b < c){
//			cout << b << " " << c << endl;
//		}
//		else
//			cout << c << " " << b << endl;
//	}
//
//	if (b<c && b<a){
//		cout << "Sorted : " << b << " ";
//		if (a < c)
//			cout << a << " " << c <<endl;
//		else
//			cout << c << " " << a << endl;
//	}
//
//	if (c<a && c<b) {
//		cout << "Sorted : " << c << " ";
//		if (a < b)
//			cout << a << " " << b << endl;
//		else
//			cout << b << " " << a << endl;
//	}

// Solution 2
	int min = a;

	if (min > b) {
		min = b;
	}

	if (min > c) {
		min = c;
	}

	cout << "Sorted : " << min << " ";

	int max = a;

	if (max < b) {
		max = b;
	}

	if (max < c) {
		max = c;
	}

	if (min < a && a < max) {
		cout << a << " " << max;
	}

	if (min < b && b < max) {
		cout << b << " " << max;
	}

	if (min < c && c < max) {
		cout << c << " " << max;
	}
	return 0;

}

