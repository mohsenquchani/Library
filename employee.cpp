#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"
#include"employee.h"

using namespace std;

void employee::print() const {
	cout << "Name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "semat: " << semat << endl;
}

void employee::editinfo(const string& newName, const string& newSemat) {
	name = newName;
	semat = newSemat;
}

void employee::borrowBook(const string& namebok) {
	borrowedBooks.push_back(namebok);
}

void employee::returnBook(const string& namebok) {
	auto it = find(borrowedBooks.begin(), borrowedBooks.end(), namebok);
	if (it != borrowedBooks.end()) {
		borrowedBooks.erase(it);
	}
	else {
		cout << "book not found.";
	}
}

void employee::displayborrow() const {
	cout << "Borrowed Books:" << endl;
	for (const auto& book : borrowedBooks) {
		cout << book << endl;
	}
}