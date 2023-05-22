/*
 * 4_array_sum.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int array_sum(int arr[], int len) {
	if (len - 1 == 0)
		return arr[0];

	return arr[len-1] + array_sum(arr, len - 1);
}

int main() {
	int arr[5] = { 1, 8, 2, 10, 3 };
	cout << array_sum(arr, 5);

	return 0;
}

