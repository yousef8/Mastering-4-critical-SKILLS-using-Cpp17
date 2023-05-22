/*
 * 3_max_array.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int max_array(int arr[], int len) {
	if (len - 1 == 0)
		return arr[0];
	int before = max_array(arr, len-1);

	if (arr[len-1] > before)
		return arr[len - 1];
	return before;
}

int main() {
	int arr[5] = {20, 8, 2, 10, 3};
	cout << max_array(arr, 5);

	return 0;
}



