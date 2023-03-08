/*
 * 3_Our_Remainder.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	double n, m;

	cout << "Enter first positive integer : ";
	cin >> n;

	cout << "Enter second positive integer : ";
	cin >> m;

	cout << "Our Remainder " << (n/m - (int)(n/m)) * m << endl;
}
