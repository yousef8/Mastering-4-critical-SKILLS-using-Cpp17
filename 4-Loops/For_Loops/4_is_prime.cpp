/*
 * 4_is_prime.cpp
 *
 *  Created on: Jan 17, 2023
 *      Author: eastking
 */
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int N;
	cout << "Enter an integer : ";
	cin >> N;

	if (N == 1) {
		cout << "NO" << endl;
	} else {
		for (int i = 2; i < N; i++) {
			if (N % i == 0) {
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
	}
	return 0;
}

