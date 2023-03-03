//============================================================================
// Name        : Variables_Homework_3.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, temp = -1;

	cin >> num1 >> num2 >> num3;

//	Swapping area

	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;

	cout << num1 << " " << num2 << " " << num3 << "\n";

	return 0;
}
