/*
 * 1_print.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int x, y;
	cout << "Enter a starting number : ";
	cin >> x;

	cout << "Enter an ending number : ";
	cin >> y;

	while (x <= y) {
		cout << x << endl;
		x++;
	}

	return 0;
}
