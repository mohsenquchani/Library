#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"

using namespace std;

class student :public person {

private:
	string reshte;
	vector<string> borrowedBooks;

public:
	student(const string& name, const string& r)
		: person(name), reshte(r) {}

	void print() const override;

	void editinfo(const string&, const string&) override;

	void borrowBook(const string&);

	void returnBook(const string& namebok);

	void displayborrow() const;

	string gettype()const override
	{
		return "student";
	}

};