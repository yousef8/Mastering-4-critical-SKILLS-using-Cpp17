/*
 * 14_trace.cpp
 *
 *  Created on: Jan 23, 2023
 *      Author: eastking
 */

/*
 The function reverse the number
 654321

 If line 6 & 7 swapped it will just print the number it will just print the number
 */

#include <iostream>

using namespace std;

void reverse(int n) {
	if (n) {
		cout << n % 10;
		reverse(n / 10);
	}
}

int main() {
	reverse(123456);
	return 0;
}
