#pragma once
#include"Account.h"

class SavingsAccount : public Account {
private:
	float interestRate, minimumBalance;

public:

	SavingsAccount() {

		interestRate = 0;
		minimumBalance = 0;

	};

	SavingsAccount(int accountNumber, string customerName, double accountBalance, float interestRate, float minimumBalance) :
		Account(accountNumber, customerName, accountBalance) {

		interestRate = interestRate;
		minimumBalance = minimumBalance;

	}

	void calculateReturns() {
		cout << "Calculate Return From SavingsAccount Class" << endl;
	}

	void calculateInterestEarned() {
		cout << "Interest Earned From Saving Accounts" << endl;
		SavingsAccount::calculateReturns();
	}

};
