/*
 * 5_special_average.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include<iostream>

using namespace std;

int main() {
	int N, cnt {1},even_cnt {0}, odd_cnt {0};
	double even_sum {0}, odd_sum {0};

	cout << "Enter count of numbers : ";
	cin >> N;

	while (cnt <= N) {
		int num;

		cout << "Enter a number : ";
		cin >> num;

		if (cnt % 2 == 0) {
			even_cnt++;
			even_sum += num;
		} else {
			odd_cnt++;
			odd_sum += num;
		}

		cnt++;
	}

	cout << "Even numbers average is " << (even_sum / even_cnt) << endl;

	cout << "Odd numbers average is " << (odd_sum / odd_cnt) << endl;

	return 0;
}
