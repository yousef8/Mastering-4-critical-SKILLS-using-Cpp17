//============================================================================
// Name        : stl_homework_1.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse_queue(queue<int>& q) {
	stack<int> rq;
	while (!q.empty()) {
		rq.push(q.front());
		q.pop();
	}

	while (!rq.empty()) {
		q.push(rq.top());
		rq.pop();
	}
	return;
}

int main() {
	queue<int> q;

	q.push(1);
	q.push(2);

	reverse_queue(q);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
