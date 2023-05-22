/*
 * 6_array_increment.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

void array_inc(int arr[], int len) {
	if (len - 1 == 0) {
		arr[0] += 0;
		cout << arr[0] << " ";
		return;
	}

	array_inc(arr, len-1);

	cout << (arr[len - 1] += len - 1) << " ";
	return;
}

int main() {
	int arr[5] = { 1, 8, 2, 10, 3 };
	array_inc(arr, 5);

	return 0;
}



