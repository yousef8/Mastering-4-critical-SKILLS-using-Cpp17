/*
 * 2_Special_Multiples_1.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N, cnt {0};

	cout << "Enter a number : ";
	cin >> N;

	while (cnt <= N) {
		if (cnt % 8 == 0 || cnt % 4 == 0 && cnt % 3 == 0)
			cout << cnt << " ";
		cnt++;
	}

	cout << endl;

	return 0;
}



