/*
 * 7_array_accumalation.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int accumulate_array(int arr[], int len) {
	if (len-1 == 0) {
		return arr[0];
	}

	arr[len-1] += accumulate_array(arr, len-1);
	return arr[len-1];
}

int main() {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int arr2[5] = {1, 8, 2, 10, 3};

	accumulate_array(arr, 6);
	accumulate_array(arr2, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << " ";
	}

	return 0;
}



