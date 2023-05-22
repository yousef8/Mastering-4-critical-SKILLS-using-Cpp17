/*
 * 11_prefix_sum.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int sum_prefix(int arr[], int prefix) {
	if (prefix-1 == 0)
		return arr[0];

	return arr[prefix-1] + sum_prefix(arr, prefix-1);
}

int main() {
	int arr[5] {1, 3, 4, 6, 7};

	cout << sum_prefix(arr, 4) << endl;

	return 0;
}



