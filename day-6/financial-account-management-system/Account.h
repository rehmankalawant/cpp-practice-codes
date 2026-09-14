#pragma once
#include<iostream>
#include<string>

using namespace std;

class Account {

protected:
	int accountNumber;
	string customerName;
	double accountBalance;



public:

	Account() {
		accountNumber = 0;
		customerName = "";
		accountBalance = 0;
	}

	Account(int accountNumber, string customerName, double accountBalance) {
		this->accountNumber = accountNumber;
		this->customerName = customerName;
		this->accountBalance = accountBalance;

	}



	virtual void calculateReturns() {
		cout << "calculateReturns in Super Base Class" << endl;

	}

	virtual void displayAccountInfo() {

		cout << "Account-Display This function will be ovveriden" << endl;

	}
};
