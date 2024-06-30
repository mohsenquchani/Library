#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"
#include"student.h"

using namespace std;

void student::print() const {
	cout << "Name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "reshte: " << reshte << endl;
}

void student::editinfo(const string& newName, const string& newReshte) {
	name = newName;
	reshte = newReshte;
}

void student::borrowBook(const string& namebok) {
	borrowedBooks.push_back(namebok);
}

void student::returnBook(const string& namebok) {
	auto it = find(borrowedBooks.begin(), borrowedBooks.end(), namebok);
	if (it != borrowedBooks.end()) {
		borrowedBooks.erase(it);
	}
	else {
		cout << "book not found.";
	}
}

void student::displayborrow() const {
	cout << "Borrowed Books:" << endl;
	for (const auto& book : borrowedBooks) {
		cout << book << endl;
	}
}