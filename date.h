#pragma once
#include<iostream>

using namespace std;

class date
{
public:
	date() { y = 1403; m = 4; d = 11; }
	date(int, int, int);
	void print();
	void setdate(int y, int m, int d);
	void datestudent();
	void dateteacher();
	void dateemployee();
protected:
	int y, m, d;
};