#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"book.h"
using namespace std;

void book::setnameb(string n) {
	nameb = n;
}

void book::setserial(string s) {
	serial = s;
}

void book::setwriter(string w) {
	writer = w;
}

void book::setquantity(int q) {
	quantity = q >= 0 ? q : 1;
}

book::book(const string& n, const string& w, const string& s, int q) {
	setnameb(n);
	setwriter(w);
	setserial(s);
	setquantity(q);
}

void book::print() const {
	cout << "name book: " << nameb << endl;
	cout << "Writer: " << writer << endl;
	cout << "number of serial: " << serial << endl;
	cout << "Quantity: " << quantity << endl;
}

void book::editinfo(const string& newTitle, const string& newWriter, const string& newSerial, int newquantity) {
	nameb = newTitle;
	writer = newWriter;
	serial = newSerial;
	quantity = newquantity;
}