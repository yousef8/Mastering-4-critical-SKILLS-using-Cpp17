/*
 * 2_Find_Max_Up_to_10.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N;

	cout << "Enter number of integers (N) : ";
	cin >> N;

	int num, max;

	if (N) {
		cout << "Enter first number : ";
		cin >> num;
		max = num;
		N--;
	}

	if (N) {
		cout << "Enter second number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter third number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 4th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 5th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 6th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 7th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 8th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 9th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	if (N) {
		cout << "Enter 10th number : ";
		cin >> num;
		if (num > max)
			max = num;
		N--;
	}

	cout << "The maxmium is " << max << endl;

}

