/*
 * 6_digits_sum.cpp
 *
 *  Created on: Jan 17, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int main() {
	int n, a, b;

	cout << "Enter N : ";
	cin >> n;

	cout << "Enter A : ";
	cin >> a;

	cout << "Enter B : ";
	cin >> b;

	int digits_sum = 0;

	for (int i = 1; i <= n; ++i) {
		int sum = 0;
		for (int j = i; j > 0;) {
			sum += j % 10;
			j /= 10;
		}
		if (a <= sum && sum <= b)
			digits_sum += i;
	}

	cout << "Digits sum is " << digits_sum << endl;
}



