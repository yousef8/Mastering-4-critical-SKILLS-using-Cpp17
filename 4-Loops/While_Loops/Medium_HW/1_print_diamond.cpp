/*
 * 1_print_diamond.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int height {0}, row {1}, stars;

	cout << "Enter diamond height : ";
	cin >> height;

	// Upper part
	while (row <= height) {
		int star_cnt = 1;
		int whitespaces = height - row;
		stars = 2 * row - 1;

		while (whitespaces) {
			cout << " ";
			whitespaces--;
		}

		while (star_cnt <= stars) {
			cout << "*";
			star_cnt++;
		}
		cout << endl;
		row++;
	}

	// Lower Part
	row = height - 1;

	while (row >= 1) {
			int star_cnt = 1;
			int whitespaces = height - row;

			while (whitespaces) {
				cout << " ";
				whitespaces--;
			}
			stars = 2 * row - 1;
			while (star_cnt <= stars) {
				cout << "*";
				star_cnt++;
			}
			cout << endl;
			row--;
		}
	return 0;
}

