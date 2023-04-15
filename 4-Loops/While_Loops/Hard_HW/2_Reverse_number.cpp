/*
 * 2_Reverse_number.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N;

	cout << "Enter a number : ";
	cin >> N;

	string R = "";

	while (N) {
		R += N % 10;
		N /= 10;
	}


	cout << test << endl;

	return 0;

}




