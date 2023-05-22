/*
 * 13_is_prefix.cpp
 *
 *  Created on: Jan 23, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

bool is_prefix(string main, string prefix, int i = 0) {
	if (i == (prefix.size()))
		return true;

	if (main[i] == prefix[i])
		return is_prefix(main, prefix, i+1);
	return false;
}

int main() {
	string main {"abcdefgh"};
	string prefix {"abd"};

	cout << is_prefix(main, prefix) << endl;
	return 0;
}



