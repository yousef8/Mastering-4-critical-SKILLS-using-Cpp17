/*
 * 1_Find_NOs.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N;
	string output = "";

	cout << "Enter number of strings : ";
	cin >> N;

	while (N) {
		string str;
		cout << "Enter string : ";
		cin >> str;

		if (str == "no" || str == "No" || str == "NO" || str == "nO"
				|| str == "on" || str == "ON" || str == "On" || str == "oN")
			output += str + " ";
		--N;
	}

	cout << output << endl;

	return 0;
}

