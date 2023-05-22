/*
 * 2_power_function.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int my_pow(int value, int p = 2) {
	if (p == 0)
		return 1;

	if (p == 1)
		return value;
	return value * my_pow(value, p-1);
}

int main() {
	cout << my_pow(7, 0);
	return 0;
}



