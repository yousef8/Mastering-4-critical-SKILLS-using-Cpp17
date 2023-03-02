#include<iostream>

using namespace std;

int main() {
	int num1, num2;

	cin >> num1 >> num2;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << num1 << " " << num2 << endl;
}
