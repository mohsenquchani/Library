#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>

using namespace std;

class person {

protected:
	string name;
	int id;
	string type;
	static long int count;

public:
	person(const string);

	void setname(string);

	string getname() const {
		return name;
	}

	int getid() const {
		return id;
	}

	virtual void editinfo(const string&, const string&) = 0;

	virtual void print() const = 0;

	virtual string gettype()const = 0;

};