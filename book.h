#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"date.h"

using namespace std;

#ifndef book_h
#define book_h
class book
{
public:
	book(const string&, const string&, const string&, int);

	void setnameb(string);
	void setserial(string);
	void setwriter(string);
	void setquantity(int);

	int getquantity() const {
		return quantity;
	}
	string getnameb() const {
		return nameb;
	}
	string getwriter() const {
		return writer;
	}
	string getserial() const {
		return serial;
	}

	void print() const;

	void editinfo(const string&, const string&, const string&, int);


	void decreasequantity() { quantity--; }
	void increasequantity() { quantity++; }

private:
	int quantity;
	string nameb;
	string writer;
	string serial;
};
#endif