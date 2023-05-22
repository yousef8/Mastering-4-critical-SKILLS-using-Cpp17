 /*
 * 3_unique_Numbers.cpp
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

	int uniq_arr[500];
	int index {0}, uniq_value;
	bool is_first = 1;

	for (int i = 0; i < N; i++) {
		if (is_first) {
			uniq_value = arr[i];
			uniq_arr[index] = uniq_value;
			++index;
			is_first = 0;
		} else if (uniq_value != arr[i]) {
			uniq_value = arr[i];
			uniq_arr[index] = uniq_value;
			index++;
		}
	}

	for (int i = 0; i < index; i++) {
		cout << uniq_arr[i] << " ";
	}

	cout << endl;

}

