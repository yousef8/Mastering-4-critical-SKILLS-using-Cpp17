/*
 * 2_stack_based_queue.cpp
 *
 *  Created on: Jan 31, 2023
 *      Author: eastking
 */
#include<iostream>
#include<queue>
using namespace std;

struct OurStack {
	queue<int> q;
	queue<int> sq;

	void push(int val) {
		if (q.empty()) {
			q.push(val);
			return;
		}

		while (!q.empty()) {
			sq.push(q.front());
			q.pop();
		}

		q.push(val);
		while(!sq.empty()) {
			q.push(sq.front());
			sq.pop();
		}

		return;
	}

	void pop() {
		if (!q.empty())
			q.pop();
	}

	int top() {
		return q.front();
	}

	bool empty() {
		return q.empty();
	}
};

int main() {
	OurStack s;
	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.empty())
		cout << s.top() << " ", s.pop();

	return 0;
}
