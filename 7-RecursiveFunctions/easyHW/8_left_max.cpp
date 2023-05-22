/*
 * 8_left_max.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

void left_max(int arr[], int len) {
	if (len - 1 == 0)
		return;

	left_max(arr,  len-1);

	arr[len-1] = max(arr[len-1], arr[len-2]);
	return;
}

int main() {
	int arr[6] = { 1, 3, 5, 7, 4, 2};
	left_max(arr, 6);
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

