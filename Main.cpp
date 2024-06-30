#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<windows.h>
#include"book.h"
#include"date.h"
#include"employee.h"
#include"library.h"
#include"person.h"
#include"student.h"
#include"teacher.h"

using namespace std;

void out();

void mainMenu(void);

void mainMenu1();

void mainMenu2();

void mainMenu3();

void addbook();

void searchbook();

void editbook();

void deletebook();

void addmember();
void addteacher();
void addstudent();
void addemployee();

void searchmember();

void editmember();

void deletemember();

void amanat();

void showamanat();

void returnbook();

library l;

int main() {
	person* s[3];
	s[0] = new student("Alireza Mohammadzade", "Computer Engineering");
	s[1] = new student("Mohsen Quchani", "Computer Engineering");
	s[2] = new student("javad Mohammadi", "Math");

	person* t[2];
	t[0] = new teacher("Dr Mohammadi", "Mathematics");
	t[1] = new teacher("Dr Eskandari", "Programing");

	person* e[2];
	e[0] = new employee("Ali jafari", "Librarian");
	e[1] = new employee("Mohammad javadi", "protection");

	for (int i = 0; i < 3; i++)
		l.addMember(s[i]);
	for (int i = 0; i < 2; i++)
		l.addMember(t[i]);
	for (int i = 0; i < 2; i++)
		l.addMember(e[i]);

	book b1("C++ programing", "Deitel", "1123921", 3);
	book b2("CLRS", "Thomas Cormen", "1024854", 2);
	book b3("logic Circuit", "moris mano", "1014359", 3);

	l.addBook(b1);
	l.addBook(b2);
	l.addBook(b3);

	int choice;

	int Exit = 1;
	int Exitbook = 1;
	int Exitmember = 1;
	int Exitamanat = 1;

	cout << "Hello\n" << "Welcome to the library QIET\n" << endl;
	system("PAUSE");
	system("CLS");

	while (Exit) {
		Exitbook = 1;
		Exitmember = 1;
		Exitamanat = 1;
		mainMenu();
		cin >> choice;
		system("CLS");
		switch (choice)
		{
		case 1:
			while (Exitbook) {
				mainMenu1();
				cin >> choice;
				system("CLS");
				switch (choice) {
				case 1:
					int n;
					cout << "enter number of add" << endl;
					cin >> n;
					for (int i = 0; i < n; i++) {
						addbook();
					}
					cout << "add book done.\n" << endl;
					system("PAUSE");
					system("CLS");
					break;
				case 2:
					cout << "name search book" << endl;
					searchbook();
					system("PAUSE");
					system("CLS");
					break;
				case 3:
					editbook();
					system("PAUSE");
					system("CLS");
					break;
				case 4:
					cout << "name delete book" << endl;
					deletebook();
					cout << "delete book done." << endl;
					system("PAUSE");
					system("CLS");
					break;
				case 5:
					l.showBook();
					system("PAUSE");
					system("CLS");
					break;
				case 6:
					Exitbook = 0;
					break;
				default:
					cout << "Error!\n\aplease try again\n\n";
					system("PAUSE");
					system("CLS");
					break;
				}
			}
			break;
		case 2:
			while (Exitmember) {
				mainMenu2();
				cin >> choice;
				system("CLS");
				switch (choice) {
				case 1:
					addmember();
					int id, z;
					cin >> id;
					switch (id) {
					case 1:
						cout << "enter number of add" << endl;
						cin >> z;
						for (int i = 0; i < z; i++) {
							addteacher();
						}
						cout << "add memeber done.\n" << endl;
						break;
					case 2:
						cout << "enter number of add" << endl;
						cin >> z;
						for (int i = 0; i < z; i++) {
							addstudent();
						}
						cout << "add memeber done.\n" << endl;
						break;
					case 3:
						cout << "enter number of add" << endl;
						cin >> z;
						for (int i = 0; i < z; i++) {
							addemployee();
						}
						cout << "add memeber done.\n" << endl;
						break;
					default:
						cout << "Error!\n\aplease try again\n\n";
						system("PAUSE");
						system("CLS");
						break;
					}
					system("PAUSE");
					system("CLS");
					break;
				case 2:
					cout << "name search member" << endl;
					searchmember();
					system("PAUSE");
					system("CLS");
					break;
				case 3:
					cout << "name edit member" << endl;
					editmember();
					system("PAUSE");
					system("CLS");
					break;
				case 4:
					cout << "name delete member" << endl;
					deletemember();
					cout << "delete member done." << endl;
					system("PAUSE");
					system("CLS");
					break;
				case 5:
					l.showMember();
					system("PAUSE");
					system("CLS");
					break;
				case 6:
					Exitmember = 0;
					break;
				default:
					cout << "Error!\n\aplease try again\n\n";
					system("PAUSE");
					system("CLS");
					break;
				}
			}
			break;
		case 3:
			while (Exitamanat) {
				mainMenu3();
				cin >> choice;
				system("CLS");
				switch (choice) {
				case 1:
					amanat();
					system("PAUSE");
					system("CLS");
					break;
				case 2:
					showamanat();
					system("PAUSE");
					system("CLS");
					break;
				case 3:
					returnbook();
					system("PAUSE");
					system("CLS");
					break;
				case 4:
					Exitamanat = 0;
					break;
				default:
					cout << "Error!\n\aplease try again\n\n";
					system("PAUSE");
					system("CLS");
					break;
				}
			}
			break;
		case 4:
			while (1)
			{
				cout << "Good Bye...\n";
				out();
				return 0;
			}
			break;
		default:
			cout << "Error!\n\aplease try again\n\n";
			system("PAUSE");
			system("CLS");
			break;
		}
	}
}

void out()
{
	for (int i = 3; i > 0; i--)
	{
		cout << i;
		Sleep(1000);
		cout << '\b';
	}
}

void mainMenu(void)
{
	cout << "^  Menu  ^\n\n";
	cout << " 1 _ books\n";
	cout << " 2 _ members\n";
	cout << " 3 _ amanat\n";
	cout << " 4 - exit\n\n";
	cout << "\nEnter your choice : ";
}

void mainMenu1()
{
	cout << "^  books  ^\n\n";
	cout << " 1 _ Add\n";
	cout << " 2 _ Search\n";
	cout << " 3 _ Edit\n";
	cout << " 4 - Delete\n";
	cout << " 5 - Show\n";
	cout << " 6 - Back\n";
	cout << "\nEnter your choice : ";
}

void mainMenu2()
{
	cout << "^  members  ^\n\n";
	cout << " 1 _ Add\n";
	cout << " 2 _ Search\n";
	cout << " 3 _ Edit\n";
	cout << " 4 - Delete\n";
	cout << " 5 - Show\n";
	cout << " 6 - Back\n";
	cout << "\nEnter your choice : ";
}

void mainMenu3()
{
	cout << "^  amanat  ^\n\n";
	cout << " 1 _ Amanat\n";
	cout << " 2 _ Show amanat\n";
	cout << " 3 _ Return book\n";
	cout << " 4 _ Back\n";
	cout << "\nEnter your choice : ";
}

void addbook() {
	string name, writer, serial;
	cin.ignore();
	int quantity;
	cout << "Enter book name: ";
	getline(cin, name);
	cout << "Enter writer name: ";
	getline(cin, writer);
	cout << "Enter serial: ";
	getline(cin, serial);
	cout << "Enter quantity: ";
	cin >> quantity;

	book newBook(name, writer, serial, quantity);
	l.addBook(newBook);
}

void searchbook() {
	string title;
	cin.ignore();
	getline(cin, title);

	book* foundBook = l.searchBook(title);
	if (foundBook) {
		foundBook->print();
	}
	else {
		cout << "Book not found." << endl;
	}
}

void editbook() {
	string title;
	cin.ignore();
	cout << "name edit book: ";
	getline(cin, title);

	book* foundBook = l.searchBook(title);
	if (foundBook) {
		string newTitle, newWriter, newSerial;
		int newQuantity;
		cout << "Enter new book name: ";
		getline(cin, newTitle);
		cout << "Enter new writer name: ";
		getline(cin, newWriter);
		cout << "Enter new serial: ";
		getline(cin, newSerial);
		cout << "Enter new quantity: ";
		cin >> newQuantity;

		l.editBook(foundBook, newTitle, newWriter, newSerial, newQuantity);
	}
	else {
		cout << "Book not found." << endl;
	}
}

void deletebook() {
	string name;
	cin.ignore();
	getline(cin, name);
	book* b = l.searchBook(name);
	if (b->getquantity() == 1) {
		l.deleteBook(name);
	}
	else if (b->getquantity() > 1)
	{
		b->decreasequantity();
	}
}

void addmember() {
	cout << "Who add:" << '\n';
	cout << "1 _ Teacher" << '\n';
	cout << "2 _ Student" << '\n';
	cout << "3 _ Employee" << '\n';
	cout << "enter the number :";
}
void addteacher()
{
	string n, m;
	cout << "name:" << '\n';
	cin.ignore();
	getline(cin, n);
	cout << "mrtabe:" << '\n';
	getline(cin, m);
	person* t;
	t = new teacher(n, m);
	l.addMember(t);
}
void addstudent()
{
	string n, r;
	cout << "name:" << '\n';
	cin.ignore();
	getline(cin, n);
	cout << "reshte:" << '\n';
	getline(cin, r);
	person* s;
	s = new student(n, r);
	l.addMember(s);
}
void addemployee()
{
	string n, s;
	cout << "name:" << '\n';
	cin.ignore();
	getline(cin, n);
	cout << "semat:" << '\n';
	getline(cin, s);
	person* e;
	e = new employee(n, s);
	l.addMember(e);
}

void searchmember() {
	string n;
	cin.ignore();
	getline(cin, n);
	person* foundMember = l.searchMember(n);
	if (foundMember) {
		foundMember->print();
	}
	else
		cout << "Member not found" << endl;
}

void editmember() {
	long int n;
	string x, y;
	cin >> n;
	person* foundmember = l.searchId(n);
	if (foundmember) {
		cout << "New name : " << '\n';
		cin >> x;
		cout << '\n';
		if (foundmember->gettype() == "student")
		{
			cout << "New reshte : " << '\n';
			cin >> y;
		}
		else if (foundmember->gettype() == "teacher")
		{
			cout << "New martbe :" << '\n';
			cin >> y;
		}
		else
		{
			cout << "New semat : "<< '\n';
			cin >> y;
		}
		l.editMember(foundmember, x, y);
		cout << "edit member don." << endl;
	}
	else
		cout << "Member not found" << endl;
}

void deletemember() {
	long int n;
	cin >> n;
	l.deleteId(n);
}

void amanat() {
	string bookTitle;
	long long int memberid;
	cout << "Enter member id to borrow a book: ";
	cin >> memberid;
	person* foundMember = l.searchId(memberid);
	if (foundMember) {
		l.showBook();
		cin.ignore();
		cout << "Enter book title to borrow: ";
		getline(cin, bookTitle);

		book* foundBook = l.searchBook(bookTitle);
		if (foundBook && foundBook->getquantity() > 0) {
			foundBook->decreasequantity();
			date today(1403, 4, 11);
			if (foundMember->gettype() == "employee") {
				static_cast<employee*>(foundMember)->borrowBook(bookTitle);
				today.dateemployee();
			}
			else if (foundMember->gettype() == "teacher") {
				static_cast<teacher*>(foundMember)->borrowBook(bookTitle);
				today.dateteacher();
			}
			else if (foundMember->gettype() == "student") {
				static_cast<student*>(foundMember)->borrowBook(bookTitle);
				today.datestudent();
			}
			cout << "Borrowed Done.\n" << "return date: ";

			today.print();
		}
		else {
			cout << "Book not available." << endl;
		}
	}
	else {
		cout << "Member not found." << endl;
	}
}

void showamanat() {
	long long int memberid;
	cout << "Enter member name to display borrowed books: ";
	cin >> memberid;

	person* foundMember = l.searchId(memberid);
	if (foundMember) {
		date today(1403, 4, 11);
		if (foundMember->gettype() == "employee") {
			static_cast<employee*>(foundMember)->displayborrow();
			today.dateemployee();
			cout << "return date: ";
			today.print();
		}
		else if (foundMember->gettype() == "teacher") {
			static_cast<teacher*>(foundMember)->displayborrow();
			today.dateteacher();
			cout << "return date: ";
			today.print();
		}
		else if (foundMember->gettype() == "student") {
			static_cast<student*>(foundMember)->displayborrow();
			today.datestudent();
			cout << "return date: ";
			today.print();
		}
	}
	else {
		cout << "Member not found." << endl;
	}
}

void returnbook() {
	string bookTitle;
	long long int memberid;
	cout << "Enter member name to return a book: ";
	cin >> memberid;

	person* foundMember = l.searchId(memberid);
	if (foundMember) {
		cin.ignore();
		cout << "Enter book title to return: ";
		getline(cin, bookTitle);

		if (foundMember->gettype() == "employee") {
			static_cast<employee*>(foundMember)->returnBook(bookTitle);
		}
		else if (foundMember->gettype() == "teacher") {
			static_cast<teacher*>(foundMember)->returnBook(bookTitle);
		}
		else if (foundMember->gettype() == "student") {
			static_cast<student*>(foundMember)->returnBook(bookTitle);
		}

		book* foundBook = l.searchBook(bookTitle);
		if (foundBook) {
			foundBook->increasequantity();
		}
	}
	else {
		cout << "Member not found." << endl;
	}
}