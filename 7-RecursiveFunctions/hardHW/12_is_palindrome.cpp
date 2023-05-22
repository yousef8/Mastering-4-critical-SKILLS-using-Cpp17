/*
 * 12_is_palindrome.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

bool is_palindrome(int arr[], int len, int i = 0) {
	if (i == len / 2)
		return true;
	if (is_palindrome(arr, len, i + 1))
		return arr[i] == arr[len - 1 - i];
	return false;
}
int main() {

	int arr[7] { 1, 2, 1, 3, 1, 5, 1 };
	cout << is_palindrome(arr, 7);
	return 0;
}

