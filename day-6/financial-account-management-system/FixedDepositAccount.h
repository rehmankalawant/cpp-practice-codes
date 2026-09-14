#pragma once
#include"Account.h"

class FixedDepositAccount : public Account {

private:

	int principalAmount;
	float interestRate;
	int depositTenure;



public:
	FixedDepositAccount() {
		int principalAmount = 0;
		float interestRate = 0.0;
		int depositTenure = 0;

	};

	FixedDepositAccount(int accountNumber, string customerName, double accountBalance, int principalAmount, float interestRate, int depositTenure)
		: Account(accountNumber, customerName, accountBalance) {

		this->principalAmount = principalAmount;
		this->interestRate = interestRate;
		this->depositTenure = depositTenure;

	};

	void calculateReturns() {
		cout << "Calculate Return From FixedDepositAccount Class" << endl;
	}


	void calculateMaturityAmount() {
		cout << "CalculateMaturityAmount from FixedDepositAccount" << endl;
	}

};