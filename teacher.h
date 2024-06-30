#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"

using namespace std;

class teacher :public person {

private:
	string martbe;
	vector<string> borrowedBooks;

public:
	teacher(const string& name, const string& m)
		: person(name), martbe(m) {}

	void print() const override;

	void editinfo(const string&, const string&) override;

	void borrowBook(const string&);

	void returnBook(const string&);

	void displayborrow() const;

	string gettype()const override
	{
		return "teacher";
	}

};