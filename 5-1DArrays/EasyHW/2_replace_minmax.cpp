/*
 * 2_replace_minmax.cpp
 *
 *  Created on: Jan 18, 2023
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

	int min {arr[0]}, max {arr[0]};

	for (int i = 1; i < N; ++i) {
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] == min)
			arr[i] = max;
		else if (arr[i] == max)
			arr[i] = min;
		cout << arr[i] << " ";
	}
}



