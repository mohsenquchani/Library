#include<iostream>
#include"date.h"

using namespace std;

	date::date(int y, int m, int d) { setdate(y, m, d); }

	void date::setdate(int y, int m, int d) {
		this->y = y > 1300 && y < 1404 ? y : 1300;
		this->m = m >= 1 && m <= 12 ? m : 1;
		this->d = d >= 1 && d <= 30 ? d : 1;
	}

	void date::print() { cout << y << "/" << m << "/" << d << endl; }

	void date::datestudent() {
		d += 21;
		while (d > 30) {
			d -= 30;
			m++;
			if (m > 12) {
				m = 1;
				y++;
			}
		}
	}
	void date::dateteacher() {
		d += 90;
		while (d > 30) {
			d -= 30;
			m++;
			if (m > 12) {
				m = 1;
				y++;
			}
		}
	}
	void date::dateemployee() {
		d += 30;
		while (d > 30) {
			d -= 30;
			m++;
			if (m > 12) {
				m = 1;
				y++;
			}
		}
	}