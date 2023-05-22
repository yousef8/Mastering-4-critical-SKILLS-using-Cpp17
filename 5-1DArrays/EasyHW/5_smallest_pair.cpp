/*
 * 5_smallest_pair.cpp
 *
 *  Created on: Jan 19, 2023
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

	bool is_first = 1;
	int smallest, sum;

	for (int i = 1; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			sum = arr[i] + arr[j] + j - i;
			if (is_first) {
				smallest = sum;
				is_first = 0;
			}

			if (smallest > sum)
				smallest = sum;

		}
	}

	cout << "Smallest is " << smallest << endl;
	return 0;
}

