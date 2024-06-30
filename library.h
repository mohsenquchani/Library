#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"book.h"
#include"person.h"

using namespace std;

class library {
private:
	vector<person*> persons;
	vector<book> books;

public:

	void addBook(const book& book);

	book* searchBook(const string& title);

	void editBook(book* book, const string& nam, const string& wr, const string& ser, int qun);

	void deleteBook(const string& title);

	void showBook() const;

	void addMember(person* member);

	person* searchMember(const string name);

	person* searchId(const int id);

	void editMember(person* member, const string& Name, const string& Other);

	void deleteId(const int id);

	void deleteMember(const string& namep);

	void showMember() const;

};