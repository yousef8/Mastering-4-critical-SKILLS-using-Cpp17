/*
 * 4_all_words_prefix.cpp
 *
 *  Created on: Jan 31, 2023
 *      Author: eastking
 */
#include<iostream>
#include<map>
#include<vector>
#include<stack>

using namespace std;

int main() {
	map<string, vector<string>> mp;

	cout << "Enter number of Unqiue strings : ";
	int n;
	cin >> n;
	while (n) {
		cout << "Enter a name : ";
		string s;
		cin >> s;

		string temp = "";
		for (auto &ch : s) {
			temp += ch;
			mp[temp].push_back(s);
		}
		n--;
	}

	cout << "Enter number of Queries : ";
	int q;
	cin >> q;
	while (q) {
		cout << "Enter query : ";
		string s;
		cin >> s;
		for (auto e : mp[s])
			cout << e << " ";
		cout << "\n";
		q--;
	}
	return 0;
}

