/*
 * 15_count_primes.cpp
 *
 *  Created on: Jan 23, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

bool is_prime(int n, int i = 2) {
	if (i == n)
		return true;

	if (n <= 1 || n % 2 == 0)
		return false;

	if (n == 2)
		return true;

	if (n % i == 0)
		return false;
	return is_prime(n, i + 1);
}

int count_primes(int start, int end) {
	if (start > end)
		return 0;
	return is_prime(start) + count_primes(start + 1, end);
}

int main() {
	cout << is_prime(17);

	return 0;
}

