/*
 * 17_fibonacci.cpp
 *
 *  Created on: Jan 24, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

unsigned int ans[100] {0};

unsigned int fib(int n) {
	if (n <= 1) {
		return 1;
	}

	if (ans[n])
		return ans[n];


	unsigned int f =  fib(n-1) + fib(n-2);
	ans[n] = f;

	return f;
}

int main() {
	cout << fib(50) << endl;

	for (int i = 0; i < 52; i++)
		cout << ans[i] << " ";
	return 0;
}



