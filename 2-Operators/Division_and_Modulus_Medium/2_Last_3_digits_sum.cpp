/*
 * 2_Last_3_digits_sum.cpp
 *
 *  Created on: Jan 14, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int num;

	cout << "Enter your integer : ";
	cin >> num;

	int num1 = num % 10;
	num /= 10;
	int num2 = num % 10;
	num /= 10;
	int num3 = num % 10;

	int sum = num1 + num2 + num3;

	cout << "The sum of the last 3 numbers : " << sum << endl;


	return 0;
}



