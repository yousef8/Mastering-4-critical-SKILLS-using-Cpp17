/*
 * 3_Max_but_constrained.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int max, a, b, c;

	cout << "Enter 3 digits whitspace separated : ";
	cin >> a >> b >> c;

	// Initialization
	if (a < 100)
		max = a;

	if (b < 100)
		max = b;

	if (c < 100)
		max = c;

	// Comparing
	if (a < 100 && a > max) {
		max = a;
	}

	if (b < 100 && b > max) {
		max = b;
	}

	if (c < 100 && c > max) {
		max = c;
	}

	cout << "Maximum integer below 100 is " << max << endl;

	return 0;
}
