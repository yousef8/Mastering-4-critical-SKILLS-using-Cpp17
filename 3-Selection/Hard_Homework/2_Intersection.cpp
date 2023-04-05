/*
 * 2_Intersection.cpp
 *
 *  Created on: Jan 15, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int s1, e1, s2, e2;

	cout << "Enter first Interval : ";
	cin >> s1 >> e1;

	cout << "Enter second Interval : ";
	cin >> s2 >> e2;

	// My Solution
//	if (s2 >= s1 && s2 <= e1) {
//		if (e2 <= e1) {
//			cout << "They intersect between [" << s2 << ", " << e2 << "]"
//					<< endl;
//		} else {
//			cout << "They intersect between [" << s2 << ", " << e1 << "]"
//					<< endl;
//		}
//	} else {
//		cout << "No intersection " << -1 << endl;
//	}

	// Prof Solution
	if (e1 < s2 || e2 < s1) {
		cout << -1 << endl;
	} else {
		if (s1 < s2)
			s1 = s2;
		if (e1 > e2)
			e1 = e2;
	}

	cout << s1 << " " << e1 << endl;

	return 0;

}
