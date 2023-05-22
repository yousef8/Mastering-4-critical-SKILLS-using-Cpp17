/*
 * 5_array_average.cpp
 *
 *  Created on: Jan 21, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

double array_avg(int arr[], int len) {
	if (len - 1 == 0)
		return arr[0];

	return (arr[len - 1] + array_avg(arr, len - 1)) / 2.0;
}

int main() {
	int arr[5] = { 1, 8, 2, 10, 3 };
	cout << array_avg(arr, 5);

	return 0;
}

