/*
 * 1_Is_Even.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter number : ";
	cin >> num;

	// Is even using %2
	bool is_even1 = num % 2 == 0;

	cout << "Using % : " << is_even1 << endl;

	// Is even using /2
	bool is_even2 = (double)num / 2 == num / 2;

	cout << "Using / : " << is_even2 << endl;

	// Is even using %10
	bool is_even3 = (int)(((double)num / 2) * 10 ) % 10 == 0;

	// Prof solution
	// int last_digiit = num % 10;
	// bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	cout << "Using %10 : " << is_even3 <<endl;

	return 0;
}
