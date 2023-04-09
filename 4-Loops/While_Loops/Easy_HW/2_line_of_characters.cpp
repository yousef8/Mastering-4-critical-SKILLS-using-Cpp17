/*
 * 2_line_of_characters.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int x, cnt {1};
	char y;

	cout << "Enter a number : ";
	cin >> x;

	cout << "Enter a character : ";
	cin >> y;

	while (cnt <= x) {
		cout << y;
		cnt++;
	}

	return 0;
}
