/*
 * 1_is_increasing.cpp
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

	int last_value = arr[0];
	bool is_increasing = 1;
	int i { 1 };

	while (is_increasing && i < N) {
		if (last_value <= arr[i]) {
			last_value = arr[i];
			++i;
		} else
			is_increasing = 0;
	}

	if (is_increasing)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

