#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include"person.h"

using namespace std;

person::person(const string name)
{
	count++;
	id = count;
	setname(name);
}

void person::setname(string n) {
	name = n;
}

long int person::count = 1331000;