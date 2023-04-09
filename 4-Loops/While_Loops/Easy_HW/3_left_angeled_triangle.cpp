/*
 * 3_Print_left_angled_triangle.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int rows, row {1};

	cout << "Enter triangle height : ";
	cin >> rows;

	while (row <= rows) {
		int star = 1;
		while (star <= row) {
			cout << "*";
			star++;
		}
		cout << endl;
		row++;
	}

	return 0;
}
