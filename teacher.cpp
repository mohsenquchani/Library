#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"
#include"teacher.h"

using namespace std;

void teacher::print() const {
	cout << "Name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "martbe: " << martbe << endl;
}

void teacher::editinfo(const string& newName, const string& newMartbe) {
	name = newName;
	martbe = newMartbe;
}

void teacher::borrowBook(const string& namebok) {
	borrowedBooks.push_back(namebok);
}

void teacher::returnBook(const string& namebok) {
	auto it = find(borrowedBooks.begin(), borrowedBooks.end(), namebok);
	if (it != borrowedBooks.end()) {
		borrowedBooks.erase(it);
	}
	else {
		cout << "book not found.";
	}
}

void teacher::displayborrow() const {
	cout << "Borrowed Books:" << endl;
	for (const auto& book : borrowedBooks) {
		cout << book << endl;
	}
}