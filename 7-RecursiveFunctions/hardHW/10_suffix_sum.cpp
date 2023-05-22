/*
 * 10_suffix_sum.cpp
 *
 *  Created on: Jan 22, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int sum_suff(int arr[], int len, int suff) {
	if (suff == 1)
		return arr[len-1];
	return arr[len-suff] + sum_suff(arr, len, suff-1);
}
int main() {
	int arr[5] {1, 3, 4, 6, 7};

	cout << sum_suff(arr, 5, 3) << endl;
	return 0;
}



