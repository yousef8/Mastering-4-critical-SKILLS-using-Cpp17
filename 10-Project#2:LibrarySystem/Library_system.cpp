//============================================================================
// Name        : Library_system.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string to_lower(string str);
bool is_prefix_equal(string first, string sec, int len);

struct User {
	int id { -1 };
	string name;
	string books_borrowed[100];
	string currently_borrowed[100];
	int borrowed_index { 0 }, current_borrowed_index { 0 };

	User() {

	}

	User(int _id, string _name) {
		id = _id;
		name = _name;
	}

	void add_book_to_borrowing_list(string name) {
		books_borrowed[borrowed_index] = name;
		currently_borrowed[current_borrowed_index] = name;
		borrowed_index++;
		current_borrowed_index++;
		return;
	}

	void return_book(string name) {
		for (int i { 0 }; i < current_borrowed_index; i++)
			if (currently_borrowed[i] == name)
				currently_borrowed[i] = "";
	}

	void print() {
		cout << id << "  " << name << "  " << "Books-Borrowed: ";
		for (int i { 0 }; i < borrowed_index; i++)
			if (books_borrowed[i] > "")
				cout << books_borrowed[i] << " ";

		cout << "  " << "Currently-Borrowing: ";
		for (int i { 0 }; i < current_borrowed_index; i++)
			if (currently_borrowed[i] > "")
				cout << currently_borrowed[i] << " ";
		cout << endl;
		return;
	}
};

struct Book {
	int id { -1 };
	string name;
	int all_quantity;
	int borrowed_quantity;
	int existing_quantity;

	string users_borrowed[100];
	int users_index { 0 };

	Book() {
		all_quantity = -1;
		borrowed_quantity = -1;
		existing_quantity = -1;
	}

	Book(int _id, string _name, int quantity) {
		id = _id;
		name = _name;
		all_quantity = existing_quantity = quantity;
		borrowed_quantity = 0;
	}

	void print() {
		cout << id << "  " << name << "  " << "Existing-quantity: "
				<< existing_quantity << "  " << "Borrowed-quantity: "
				<< borrowed_quantity << endl;
		return;
	}

	void add_user_to_borrowing_list(string name) {
		users_borrowed[users_index] = name;
		users_index++;
		return;
	}

	void who_borrowed() {
		if (users_index <= 0) {
			cout << "No one borrowed this book" << endl;
			return;
		}
		for (int i { 0 }; i < users_index; i++)
			cout << i+1 << " " << users_borrowed[i] << endl;
		return;
	}
};

bool assending_order(Book first, Book second);
bool assending_order_string(Book first, Book second);
struct Library {
	User users[100];
	Book books[100];

	int user_index = 0;
	int book_index = 0;
	int add_book() {
		int id, quantity;
		string name;
		cout << "Enter id, name, quantity : ";
		cin >> id >> name >> quantity;

		books[book_index] = Book(id, name, quantity);
		book_index++;
		return id;
	}

	int add_user() {
		int id;
		string name;

		cout << "Enter id, name : ";
		cin >> id >> name;

		users[user_index] = User(id, name);
		user_index++;
		return id;
	}

	void list_books() {
		for (int i { 0 }; i < book_index; i++)
			books[i].print();
	}

	void list_users() {
		for (int i { 0 }; i < user_index; i++)
			users[i].print();
	}

	void search_books_by_prefix() {
		string prefix = "";
		cout << "Enter a prefix : ";
		cin >> prefix;

		prefix = to_lower(prefix);
		int len = prefix.size();

		for (int i { 0 }; i < book_index; i++)
			if (is_prefix_equal(prefix, to_lower(books[i].name), len) == 1)
				books[i].print();

		return;
	}

	void list_books_by_id() {
		Book sorted_books[book_index];
		for (int i { 0 }; i < book_index; i++)
			sorted_books[i] = books[i];

		sort(sorted_books, sorted_books + book_index, assending_order);

		for (int i { 0 }; i < book_index; i++)
			sorted_books[i].print();
	}

	void list_books_by_name() {
		Book sorted_books[book_index];
		for (int i { 0 }; i < book_index; i++)
			sorted_books[i] = books[i];

		sort(sorted_books, sorted_books + book_index, assending_order_string);

		for (int i { 0 }; i < book_index; i++)
			sorted_books[i].print();
	}

	void borrow_book() {
		string user, book;
		int book_pos { -1 }, user_pos { -1 };
		while (true) {
			cout << "Enter user name, book name : ";
			cin >> user >> book;

			for (int i { 0 }; i < book_index; i++)
				if (books[i].name == book)
					book_pos = i;

			if (book_pos == -1) {
				cout << "No such book" << endl;
				continue;
			}

			for (int i { 0 }; i < user_index; i++)
				if (users[i].name == user)
					user_pos = i;

			if (user_pos == -1) {
				cout << "No such user" << endl;
				continue;
			}
			break;
		}

		if (books[book_pos].existing_quantity <= 0) {
			cout << "No enough quantity" << endl;
			return;
		}

		books[book_pos].existing_quantity--;
		books[book_pos].borrowed_quantity++;
		books[book_pos].add_user_to_borrowing_list(users[user_pos].name);

		users[user_pos].add_book_to_borrowing_list(books[book_pos].name);
	}

	void return_book() {
		string user, book;
		int book_pos { -1 }, user_pos { -1 };
		while (true) {
			cout << "Enter user name, book name : ";
			cin >> user >> book;

			for (int i { 0 }; i < book_index; i++)
				if (books[i].name == book)
					book_pos = i;

			if (book_pos == -1) {
				cout << "No such book" << endl;
				continue;
			}

			for (int i { 0 }; i < user_index; i++)
				if (users[i].name == user)
					user_pos = i;

			if (user_pos == -1) {
				cout << "No such user" << endl;
				continue;
			}
			break;
		}

		books[book_pos].borrowed_quantity--;
		books[book_pos].existing_quantity++;

		users[user_pos].return_book(books[book_pos].name);

	}

	void who_borrowed() {
		string book;
		int pos;
		while (true) {
			cout << "Enter book name : ";
			cin >> book;

			for (int i { 0 }; i < book_index; i++)
				if (books[i].name == book)
					pos = i;

			if (pos == -1) {
				cout << "No such book" << endl;
				continue;
			}
			break;
		}

		books[pos].who_borrowed();
		return;
	}
};

int menu();
void library_system();

int main() {
	library_system();
	return 0;
}

int menu() {
	cout << "1) Add Book" << endl;
	cout << "2) Search Books by Prefix" << endl;
	cout << "3) Query who borrowed a book" << endl;
	cout << "4) List books sorted by ID" << endl;
	cout << "5) List books sorted by name" << endl;
	cout << "6) Add User" << endl;
	cout << "7) Borrow a book" << endl;
	cout << "8) Return a book" << endl;
	cout << "9) List Users" << endl;
	cout << "10) Exit" << endl;

	int choice { 0 };

	while (true) {
		cout << "Enter your choice: ";
		cin >> choice;
		if (1 <= choice && choice <= 10)
			break;
	}

	return choice;
}

void library_system() {
	Library library;

	while (true) {
		int choice = menu();
		cout << endl << "****************************" << endl << endl;

		if (choice == 1)
			library.add_book();

		if (choice == 2)
			library.search_books_by_prefix();

		if (choice == 3)
			library.who_borrowed();

		if (choice == 4)
			library.list_books_by_id();

		if (choice == 5)
			library.list_books_by_name();

		if (choice == 6)
			library.add_user();

		if (choice == 7)
			library.borrow_book();

		if (choice == 8)
			library.return_book();

		if (choice == 9)
			library.list_users();

		if (choice == 10)
			break;

		cout << endl << "****************************" << endl;
	}

	cout << "Good Bye" << endl;
	return;

}

string to_lower(string str) {
	string output = "";
	int len = str.size();
	for (int i { 0 }; i < len; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			char x = ((str[i] - 'A') + 'a');
			output = output + x;
		} else
			output = output + str[i];
	}

	return output;
}

bool is_prefix_equal(string first, string sec, int len) {
	if (len == 1)
		return first[0] == sec[0];

	if (is_prefix_equal(first, sec, len - 1))
		return first[len - 1] == sec[len - 1];
	return false;

}

bool assending_order(Book first, Book second) {
	return first.id < second.id;
}

bool assending_order_string(Book first, Book second) {
	int len = 0;
	string f = to_lower(first.name);
	string s = to_lower(second.name);
	if (f.size() < s.size())
		len = f.size();
	else
		len = s.size();

	for (int i { 0 }; i < len; i++) {
		if (f[i] < s[i])
			return true;
		else if (f[i] > s[i])
			return false;
		else
			continue;
	}

	return true;
}
