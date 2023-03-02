#include<iostream>

using namespace std;

int main() {
	string student_one_name, student_two_name;
	int student_one_id, student_two_id;
	float student_one_grade, student_two_grade;


	cout << "What is student 1 name: ";
	cin >> student_one_name;

	cout << "His id: ";
	cin >> student_one_id;

	cout << "His math exam grade: ";
	cin >> student_one_grade;

	cout << "What is student 2 name: ";
	cin >> student_two_name;

	cout << "His id: ";
	cin >> student_two_id;

	cout << "His math exam grade: ";
	cin >> student_two_grade;

	cout << "Students grades in math" << endl;
	cout << student_one_name << "(with id " << student_one_id << ")" << " got grade: " << student_one_grade << endl;
	cout << student_two_name << "(with id " << student_two_id << ")" << " got grade: " << student_two_grade << endl;


}
