/*
 * 1_Intervals.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int cnt {0}, x, s1, e1, s2, e2, s3, e3;

	cout << "Enter number to query (X) : ";
	cin >> x;

	cout << "Enter first interval (s1, e1) : ";
	cin >> s1 >> e1;

	if (x >= s1 && x <= e1) {
		cnt++;
	}

	cout << "Enter first interval (s2, e2) : ";
	cin >> s2>> e2;

	if (x >= s2 && x <= e2) {
		cnt++;
	}
	cout << "Enter first interval (s3, e3) : ";
	cin >> s3 >> e3;

	if (x >= s3 && x <= e3) {
		cnt++;
	}

	cout << x << " Exists in " << cnt << " intervals" << endl;

	return 0;
}
