/*
 * 4_Conditional_Count.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {

	int x, n1, n2, n3, n4, n5;

	cout << "Enter The X number : ";
	cin >> x;

	cout << "Enter other 5 numbers whitspace separated : ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	cout << "Numbers <=" << x << " ";
	if (n1 <= x)
		cout << n1 << " ";
	if (n2 <= x)
		cout << n2 << " ";
	if (n3 <= x)
		cout << n3 << " ";
	if (n4 <= x)
		cout << n4 << " ";
	if (n5 <= x)
		cout << n5 << " ";

	cout << "\nNumbers >" << x << " ";
	if (n1 > x)
		cout << n1 << " ";
	if (n2 > x)
		cout << n2 << " ";
	if (n3 > x)
		cout << n3 << " ";
	if (n4 > x)
		cout << n4 << " ";
	if (n5 > x)
		cout << n5 << " ";

	return 0;
}