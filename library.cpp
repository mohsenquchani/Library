#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"book.h"
#include"person.h"
#include"library.h"
#include"employee.h"
#include"student.h"
#include"teacher.h"

using namespace std;

void library::addBook(const book& book) {
	books.push_back(book);
}

book* library::searchBook(const string& title) {
	for (auto& book : books) {
		if (book.getnameb() == title) {
			return& book;
		}
	}
	return nullptr;
}

void library::editBook(book* book, const string& nam, const string& wr, const string& ser, int qun) {
	if (book) {
		book->editinfo(nam, wr, ser, qun);
	}
}

void library::deleteBook(const string& title) {
	books.erase(remove_if(books.begin(), books.end(), [&](const book& book) {
		return book.getnameb() == title;
		}), books.end());
}

void library::showBook() const {
	for (const auto& book : books) {
		book.print();
		cout << endl;
	}
}

void library::addMember(person* member) {
	persons.push_back(member);
}

person* library::searchMember(const string name) {
	for (auto member : persons) {
		if (member->getname() == name) {
			return member;
		}
	}
	return nullptr;
}

person* library::searchId(const int id) {
	for (auto member : persons) {
		if (member->getid() == id) {
			return member;
		}
	}
	return nullptr;
}

void library::editMember(person* member, const string& Name, const string& Other) {
	if (member) {
		member->editinfo(Name, Other);
	}
}

void library::deleteId(const int id) {
	persons.erase(remove_if(persons.begin(), persons.end(), [&id](person* p) {
		return p->getid() == id;
		}), persons.end());
}

void library::deleteMember(const string& namep) {
	persons.erase(remove_if(persons.begin(), persons.end(), [&](const person* member) {
		return member->getname() == namep;
		}), persons.end());
}

void library::showMember() const {
	for (const auto& member : persons) {
		member->print();
		cout << endl;
	}
}