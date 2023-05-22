/*
 * 5_all_words_prefix_2.cpp
 *
 *  Created on: Jan 31, 2023
 *      Author: eastking
 */
#include<iostream>
#include<map>
#include<set>
#include<stack>

using namespace std;

int main() {
	map<string, set<string>> mp;

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
			mp[temp].insert(s);
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

