#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"

using namespace std;

class employee :public person {

private:
	string semat;
	vector<string> borrowedBooks;

public:
	employee(const string& name, const string& s)
		: person(name), semat(s) {}

	void print() const override;

	void editinfo(const string&,const string&) override;

	void borrowBook(const string&);

	void returnBook(const string&);

	void displayborrow() const;

	string gettype()const override
	{
		return "employee";
	}

};