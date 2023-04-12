 /*
 * 3_Special_Multiples_2.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N, cnt {1};

	cout << "Enter a number : ";
	cin >> N;

	while (N) {
		if (cnt % 3 == 0 && cnt % 4 != 0) {
			cout << cnt << " ";
			N--;
		}
		cnt++;
	}

	cout << endl;
	return 0;
}



