#pragma once
#include<iostream>
#include<string>

#include"InvalidAmountException.h"
#include"InsufficientBalanceException.h"

using namespace std;

class Wallet {



protected:
	int walletId;
	string holderName;
	double balance;

public:

	Wallet() {

		walletId = 0;
		holderName = "";
		balance = 0.0;

	}

	Wallet(int walletId, string holderName, double balance) {

		this->walletId = walletId;
		this->holderName = holderName;
		this->balance = balance;

	}

	void addMoney(double addAmount) {
		if (addAmount <= 0) {
			throw InvalidAmountException();
		}

		balance += addAmount;
	}

	void widrawMoney(double widrawAmount) {
		if (widrawAmount <= 0) {
			throw InsufficientBalanceException();
		}
	}

	void display() {

		cout << "walletId = " << walletId;
		cout << "holderName = " << holderName;
		cout << "balance = " << balance;

	}

	//	Operator Overrloading

	friend istream& operator>>(istream& in, Wallet wall);
	friend ostream& operator<<(ostream& out, Wallet wall);

};

istream& operator>>(istream& in, Wallet wall) {

	cout << "Enter the Wallet Id = ";
	in >> wall.walletId;

	cout << "Enter the holderName = ";
	in >> wall.holderName;

	cout << "Enter the Balance = ";
	in >> wall.balance;

	return in;

};

ostream& operator<<(ostream& out , Wallet wall) {

	out << "Wallet Id = " << wall.walletId;
	out << "Holder Name = " << wall.holderName;
	out << "Balance = " << wall.walletId;

	return out;
}
