/*
 * 1_Arithmetic.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter first number : ";
	cin >> a;

	cout << "Enter second number : ";
	cin >> b;

	bool is_a_even = a % 2 == 0;
	bool is_b_even = b % 2 == 0;

	if (is_a_even && is_b_even) {
		cout << "Their division : " << a/b << endl;
	} else if (!is_a_even && !is_b_even) {
		cout << "Their product : " << a*b << endl;
	} else if (!is_a_even && is_b_even){
		cout << "Their sum : " << a+b << endl;
	} else {
		cout << "Their subtraction : " << a - b << endl;
	}
}