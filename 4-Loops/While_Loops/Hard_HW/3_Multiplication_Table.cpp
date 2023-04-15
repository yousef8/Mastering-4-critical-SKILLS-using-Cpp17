/*
 * 3_Multiplication_Table.cpp
 *
 *  Created on: Jan 16, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int main() {
	int n, m;
	cout << "Enter N : ";
	cin >> n;

	cout << "Enter M : ";
	cin >> m;

	int n_cnt = 1;

	cout << "Begin Multiplication Table" << endl;

	while (n_cnt <= n) {
		int m_cnt = 1;
		while (m_cnt <= m) {
			cout << n_cnt << " X " << m_cnt << " = " << n_cnt * m_cnt << endl;
			++m_cnt;
		}
		++n_cnt;
	}

	return 0;
}



