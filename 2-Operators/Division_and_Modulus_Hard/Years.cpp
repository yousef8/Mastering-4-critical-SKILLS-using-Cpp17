/*
 * 2_Years.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int age;

	cout << "Enter your age : ";
	cin >> age;

	int years = age / 360;

	age -= years * 360;

	int months = age / 30;

	int days = age % 30;

	cout << "You have " << years << " years " << months << " months " << days << " days" << endl;

	return 0;
}
