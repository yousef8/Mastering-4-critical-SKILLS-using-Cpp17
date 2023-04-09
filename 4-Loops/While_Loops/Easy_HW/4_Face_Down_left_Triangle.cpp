/*
 * 4_Face_Down_Left_triangle.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int rows, last_row {1};

		cout << "Enter triangle height : ";
		cin >> rows;

		while (rows >= last_row) {
			int star = 1;
			while (star <= rows) {
				cout << "*";
				star++;
			}
			cout << endl;
			rows--;
		}

		return 0;
}
