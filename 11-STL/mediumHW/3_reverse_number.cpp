/*
 * 3_reverse_number.cpp
 *
 *  Created on: Jan 31, 2023
 *      Author: eastking
 */
#include<iostream>
#include<stack>

using namespace std;

int countTen(int num) {
	int n_ten = 1;
	while (num/10){
		n_ten *= 10;
		num /= 10;
	}
	return n_ten;
}

int reverse_num(int num) {
	stack<int> s;
	int temp {num};

	if (num < 0)
		return 1;

	int no_ten = countTen(num);

	while (temp) {
		num = temp / no_ten;
		temp %= no_ten;
		s.push(num);
		no_ten /= 10;
	}

	int reversed = 0;
	while (!s.empty()) {
		reversed = (reversed * 10) + s.top();
		s.pop();
	}

	return reversed;
}

int main() {
	int num = 1234;
	cout << reverse_num(num) << endl;
	return 0;
}

