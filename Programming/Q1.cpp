#include <iostream>
#include <string>
using namespace std;


class BankAccount{
private:
	string dName, id;
	int balance;

public:
	BankAccount(){
		dName = "No name";
		balance = 0;
	}
	BankAccount(string n, string name, int b) {
		id = n;
		dName = name;
		balance = b;
	}
	string getName();
	string getID();
	int getBalance();
	void deposit(int n);
	void withdraw(int n);
};


string BankAccount::getName(){
	return dName;
}

string BankAccount::getID(){
	return id;
}

int BankAccount::getBalance(){
	return balance;
}

void BankAccount::deposit(int n){
	if (n < 0){
		cout << "Can't deposit negative number!";
	}
	else {
		balance += n;
	}
}

void BankAccount::withdraw(int n) {
	if (n > balance) {
		cout << "Your account has no enough money!";
	}
	else if (n < 0){
		cout << "Can't withdraw negative number!";
	}
	else {
		balance -= n;
	}
}

void main() {
	BankAccount b1("1", "Ahmed", 100);
	b1.deposit(50);
	b1.withdraw(70);
	string name = b1.getName();
	string accID = b1.getID();
	int balance = b1.getBalance();
	cout << name << " has " << balance << " in his account." << endl;
	
}