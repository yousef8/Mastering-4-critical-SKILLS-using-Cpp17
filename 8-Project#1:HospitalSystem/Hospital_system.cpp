//============================================================================
// Name        : Hospital_system.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int specialization { 20 };
string patients[specialization][5][2];

int queue[specialization];

string add_patient(int spec, string name, bool is_urgent);
int add_patient_program();

int print_patients();

string next_patient(int spec);

void next_patient_program();

int menu();

void hospital_system();

int main() {
	hospital_system();
	return 0;
}

void hospital_system() {
	while (true) {
		int choice = menu();

		cout << "***********************************" << endl;

		if (choice == 1)
			add_patient_program();

		if (choice == 2)
			print_patients();

		if (choice == 3)
			next_patient_program();

		if (choice == 4)
			break;

	}
	cout << "Good bye" << endl;
	return;
}

int menu() {
	int choice { 0 };

	cout << "1) Add new patient" << endl;
	cout << "2) Print all patients" << endl;
	cout << "3) Get next patient" << endl;
	cout << "4) Exit" << endl;
	while (true) {
		cout << "Enter your choice: ";
		cin >> choice;
		if (1 <= choice && choice <= 4)
			break;
	}

	return choice;
}

int add_patient_program() {
	int spec, status;
	string name;
	cout << "Enter specialization, name, status: ";
	cin >> spec >> name >> status;

	cout << add_patient(--spec, name, status) << endl << "\n";
	return 0;
}

string add_patient(int spec, string name, bool is_urgent) {
	if (!(0 <= queue[spec] && queue[spec] < 5)) {
		return "Sorry we can't add more patients for this specialization";
	}

	int index = queue[spec];

	if (!is_urgent) {
		patients[spec][index][0] = name;
		patients[spec][index][1] = "r";
		++queue[spec];
		return "Add successfully";
	}

	int last_urgent { -1 };
	for (int i = 0; i < 5; i++) {
		if (patients[spec][i][1] == "u")
			last_urgent = i;
	}

	for (int i = 3; last_urgent < i; --i) {
		patients[spec][i + 1][0] = patients[spec][i][0];
		patients[spec][i + 1][1] = patients[spec][i][1];
	}

	patients[spec][last_urgent + 1][0] = name;
	patients[spec][last_urgent + 1][1] = 'u';
	queue[spec]++;
	return "Add successfully";
}

int print_patients() {
	for (int spec = 0; spec < specialization; spec++) {
		if (queue[spec]) {
			cout << "there are " << queue[spec]
					<< " patients in specialization " << spec + 1 << endl;
			for (int patient = 0; patient < queue[spec]; patient++)
				cout << patient + 1 << " " << patients[spec][patient][0] << " "
						<< patients[spec][patient][1] << endl;
			cout << endl;
		}
	}
	return 0;
}

void next_patient_program() {
	int spec;
	while (true) {
		cout << "Enter specialization : ";
		cin >> spec;
		if (0 < spec && spec < 20)
			break;
	}

	cout << next_patient(--spec) << endl << "\n";
	return;
}

string next_patient(int spec) {

	if (!queue[spec])
		return "No patients at the moment. Have rest, Dr";

	string patient_name = patients[spec][0][0];

	for (int i = 0; i < 4; i++) {
		patients[spec][i][0] = patients[spec][i + 1][0];
		patients[spec][i][1] = patients[spec][i + 1][1];
	}

	--queue[spec];
	return patient_name + " please go with the Dr";
}
