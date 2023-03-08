/*
 * 1_Averages.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	double n1, n2, n3, n4, n5;

	cout << "Enter first number : ";
	cin >> n1;

	cout << "Enter second number : ";
	cin >> n2;

	cout << "Enter third number : ";
	cin >> n3;

	cout << "Enter fourth number : ";
	cin >> n4;

	cout << "Enter fifth number : ";
	cin >> n5;

	cout << "Their Average is : " << (n1 + n2 + n3 + n4 + n5)/5 << endl;

	cout << (n1 + n2 + n3) / (n4 + n5) << endl;

	cout << ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2) << endl;
}

