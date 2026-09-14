#pragma once
#include"Account.h"

class CurrentAccount : public Account {

private:
	double overdraftLimit, serviceCharges;

public:
	CurrentAccount() {
		overdraftLimit = 0.0;
		serviceCharges = 0.0;
	};

	CurrentAccount(int accountNumber, string customerName, double accountBalance, double overdraftLimit, double serviceCharges)
		:Account(accountNumber, customerName, accountBalance) {

		this->overdraftLimit = overdraftLimit;
		this->serviceCharges = serviceCharges;

	}

	void calculateReturns() {
		cout << "Calculate Return From CurrentAccount Class" << endl;
	}


};