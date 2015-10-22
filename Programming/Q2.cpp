#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person() {
		lname = ""; fname[0] =  '\0';
	} // #1
	Person(const string & ln, const char * fn = "Heyyou"){	// #2
		lname = ln;
		strcpy_s(fname, fn);
	} 
	// the following methods display lname and fname
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format
};


void Person::Show() const {
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const {
	cout << lname << " " << fname<<endl;
}

void main() {
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
	// etc. for two and three
	two.Show();
	two.FormalShow();

	cout << endl;
	three.Show();
	three.FormalShow();
	cout << endl;

}