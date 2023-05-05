/*
 * 1_printing_x.cpp
 *
 *  Created on: Jan 17, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int main() {
	int rows;
	cout << "Enter Odd rows number : ";
	cin >> rows;

	for (int row = 1; row <= rows; ++row) {
		// External spacing
		for (int i = 0; i < row - 1; ++i) {
			cout << " ";
		}

		cout << "*";

		// internal spacing
		int spaces = 1 * (row != rows) + 2 * (rows - row - 1);
		for (int i = 0; i < spaces; ++i) {
			cout << " ";
		}

		// Last Star
		int star = !(rows == row);
		for (int i = 0; i < star; ++i)
			cout << "*";

		cout << endl;
	}

	for (int row = rows - 1; row > 0; --row) {
			// External spacing
			for (int i = 0; i < row - 1; ++i) {
				cout << " ";
			}

			cout << "*";

			// internal spacing
			int spaces = 1 * (row != rows) + 2 * (rows - row - 1);
			for (int i = 0; i < spaces; ++i) {
				cout << " ";
			}

			// Last Star
			int star = !(rows == row);
			for (int i = 0; i < star; ++i)
				cout << "*";

			cout << endl;
		}

	return 0;
}



