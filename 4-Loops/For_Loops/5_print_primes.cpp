 /*
 * 5_print_primes.cpp
 *
 *  Created on: Jan 17, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int main() {
	int N;
	cout << "Enter a Number : ";
	cin >> N;

	cout << 2;
	for (int i = 3; i < N; ++i ){
		bool isPrime = 1;

		for (int j = 2; j < i; ++j) {
			if (i % j == 0)
				isPrime = 0;
		}

		if (isPrime)
			cout << "," << i;
	}
	cout << endl;
}



