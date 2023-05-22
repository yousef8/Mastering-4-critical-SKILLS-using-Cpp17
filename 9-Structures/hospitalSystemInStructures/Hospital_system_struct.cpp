//============================================================================
// Name        : Hospital_system_struct.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct patient {
	string name;
	bool status;
	int spec;

	patient() {
		name = "";
		status = false;
		spec = -1;
	}

	patient(string _name, bool _status, int _spec) {
		name = _name;
		status = _status;
		spec = _spec;
	}

	string print() {
		string info = name + " ";
		if (status)
			info = info + "urgent" + "\n";

		else
			info = info + "regular" + "\n";
		return info;
	}
};

struct specialization {
	patient queue[5];
	int turn = 0;
	int spec_num;

	specialization() {
		spec_num = -1;
	}

	specialization(int n) {
		spec_num = n;
	}

	string add_regular(patient p) {
		queue[turn] = p;
		++turn;
		return "Add successfully";
	}

	string add_urgent(patient p) {
		int last_urgent { -1 };
		for (int i = 0; i < 5; i++) {
			if (queue[i].status == 1)
				last_urgent = i;
		}

		for (int i = 3; last_urgent < i; --i)
			queue[i + 1] = queue[i];

		queue[last_urgent + 1] = p;
		++turn;
		return "Add successfully";
	}

	int add_patient(string name, bool status, int spec) {
		patient p = patient(name, status, spec);

		if (p.status) {
			cout << add_urgent(p) << endl;
			return 0;
		}

		cout << add_regular(p) << endl;
		return 0;
	}

	void print() {
		cout << "There are " << turn << " patients in specialization "
				<< spec_num + 1 << endl;
		for (int patient = 0; patient < turn; patient++)
			cout << patient + 1 << " " << queue[patient].print();
		cout << "\n";
	}

	string next_patient() {
		if (!turn)
			return "No patients at the moment. Have rest, Dr";

		patient next_patient = queue[0];

		for (int i = 0; i < 4; i++)
			queue[i] = queue[i + 1];

		--turn;
		return next_patient.name + " please go with the Dr";
	}

};

struct Hospital {
	specialization specs[20];

	Hospital() {
		for (int i { 0 }; i < 20; i++)
			specs[i] = specialization(i);
	}

	void add_patient_to_spec() {
		int spec, status;
		string name;

		while (true) {
			cout << "Enter specialization, name, status: ";
			cin >> spec >> name >> status;

			if (spec < 1 || spec > 20) {
				cout << "specialization are from 1 to 20" << endl;
				continue;
			}

			if (status < 0 || status > 1) {
				cout << "status either 0 or 1" << endl;
				continue;
			}
			break;
		}

		specs[--spec].add_patient(name, status, spec);
		return;
	}

	void print_specs() {
		for (int i { 0 }; i < 20; i++)
			if (specs[i].turn)
				specs[i].print();
	}

	void get_next_patient() {
		int spec;
		while (true) {
			cout << "Enter specialization : ";
			cin >> spec;
			if (0 < spec && spec < 20)
				break;
		}
		cout << specs[--spec].next_patient() << endl;
		return;
	}
};

int menu();

void hospital_system();

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	hospital_system();

	return 0;
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

void hospital_system() {
	Hospital hospital;
	while (true) {
		int choice = menu();

		cout << "***********************************" << endl;

		if (choice == 1)
			hospital.add_patient_to_spec();

		if (choice == 2)
			hospital.print_specs();

		if (choice == 3)
			hospital.get_next_patient();

		if (choice == 4)
			break;

	}
	cout << "Good bye" << endl;
	return;
}

