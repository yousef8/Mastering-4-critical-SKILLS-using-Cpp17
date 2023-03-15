/*
 * 3_4th_digits_from_end.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "Enter a number : ";
	cin >> n;

	int n4 = (n % 10000) / 1000;

	cout << "4th number from the end is " << n4 << endl;

	return 0;
}



