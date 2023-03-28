/*
 * 1_Find_Max.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int n, max;

	cout << "Enter first integer : ";
	cin >> n;

	max = n;

	cout << "Enter second integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter third integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter forth integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter fifth integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter sixth integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter 7th integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter 8th integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter 9th integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "Enter 10th integer : ";
	cin >> n;

	if (n > max)
		max = n;

	cout << "The Max is " << max << endl;

	return 0;
}

