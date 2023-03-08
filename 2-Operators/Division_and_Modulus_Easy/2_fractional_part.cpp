/*
 * 2_Fractional_Part.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	double a, b;

	cout << "Enter first number : ";
	cin >> a;

	cout << "Enter secoud number : ";
	cin >> b;

	cout << "Fraction part is " << ((a/b) - (int)(a/b))<< endl;
}
