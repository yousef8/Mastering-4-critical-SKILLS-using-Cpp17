/*
 * 1_length_3n_+_1.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include<iostream>
using namespace std;

int seq(int n) {
	int cnt = 1;
	cout << n << " ";

	if (n == 1) {
		cout << endl;
		return 1;
	}

	if (n % 2 == 0)
		cnt += seq(n / 2);

	if (n % 2 != 0)
		cnt += seq(3 * n + 1);

	return cnt;
}

int main() {
	cout << seq(5);

	return 0;
}

