/*
 * 4_Minimum_values.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include <iostream>
#include<climits>
#include<string>

using namespace std;

int main() {
	int Test_Cases_num;
	string output = "";

	cout << "Enter number of test cases (T) : ";
	cin >> Test_Cases_num;

	while (Test_Cases_num) {
		cout << "Test Case number " << Test_Cases_num << endl;

		int N;
		int min = INT_MAX;

		cout << "Enter N : ";
		cin >> N;

		while (N) {
			int num;
			cout << "Enter number";
			cin >> num;

			if (num < min)
				min = num;
			N--;
		}
		Test_Cases_num--;
		output += to_string(min) + "\n";
	}

	cout << output;

	return 0;
}



