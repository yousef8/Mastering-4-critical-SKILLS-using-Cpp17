/*
 * 1_100_or_7.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "Enter an integer number : ";
	cin >> n;

	bool is_even = n % 2 == 0;
	int is_odd = !is_even;

	cout << ((is_even * 100) + (is_odd * 7)) << endl;

	return 0;
}
