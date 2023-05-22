//============================================================================
// Name        : stl_homework_2.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>

using namespace std;

int power(int x, int y) {
	if (y == 0)
		return 1;
	else if (y % 2 == 0)
		return power(x, y / 2) * power(x, y / 2);
	else
		return x * power(x, y / 2) * power(x, y / 2);
}

int main() {
	cout << "Enter balanced parentheses string : ";
	string w;
	cin >> w;

	stack<char> s;
	bool is_ok = true;
	int score = 0;

	for (auto ch : w) {
		if (ch == '(' && s.empty()) {
			s.push(ch);
			is_ok = true;
		} else if (ch == '(') {
			s.push(ch);
			if (!is_ok)
				is_ok = true;
		} else if (ch == ')' && is_ok) {
			is_ok = false;
			s.pop();
			score += power(2, (int)s.size());
		} else if (ch == ')') {
			s.pop();
		}
	}

	cout << score << "\n";
	return 0;
}
