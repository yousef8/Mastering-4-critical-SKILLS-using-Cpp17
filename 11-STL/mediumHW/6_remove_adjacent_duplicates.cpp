/*
 * 6_remove_adjacent_duplicates.cpp
 *
 *  Created on: Feb 1, 2023
 *      Author: eastking
 */
#include <iostream>
#include <stack>

using namespace std;

string remove_adj_dup(string st) {
	stack<char> s;
	bool is_dup { 1 };
	while (is_dup) {
		is_dup = 0;
		for (char ch : st)
			s.push(ch);
		st = "";

		while (!s.empty()) {
			char c1 = s.top();
			s.pop();
			char c2 = s.top();
			s.pop();
			if (c1 == c2) {
				is_dup = 1;
				continue;
			}
			st += c1;
			s.push(c2);
			cout << c1 << " "  << c2 << " ";
		}
	}
	return st;
}

int main() {
	string w = "abbaca";
	cout << remove_adj_dup(w) << "\n";
	return 0;
}

