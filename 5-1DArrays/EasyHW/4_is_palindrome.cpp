/*
 * 4_is_palindrome.cpp
 *
 *  Created on: Jan 19, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int main() {
	int N;

	cout << "Enter N : ";
	cin >> N;

	int arr[N];

	for (int i = 1; i <= N; i++) {
		cout << "Enter number " << i << " : ";
		cin >> arr[i - 1];
	}

	int is_palindrome = 1;

	for (int i = 0; i < N / 2 && is_palindrome; i++) {
		if (arr[i] != arr[N-i-1])
			is_palindrome = 0;
	}

	if (is_palindrome)
		cout << "IS a palindrome" << endl;
	else
		cout << "NOT a palindrome" << endl;

	return 0;
}

