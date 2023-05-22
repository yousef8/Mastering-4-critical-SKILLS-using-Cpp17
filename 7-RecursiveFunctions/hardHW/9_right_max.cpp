/*
 * 9_right_max.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

void right_max(int arr[], int len, int i = 0) {
	if(i == len-1)
		return;
	right_max(arr, len, i+1);

	arr[i] = max(arr[i], arr[i+1]);
	return;
}

int main() {
	int arr[6] = {1, 3, 5, 7, 4, 2};

	right_max(arr, 6, 0);

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}


