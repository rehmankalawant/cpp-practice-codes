#pragma once
#include<iostream>
#include<string>

using namespace std;

class Bank {
private:
	int accountNumber, accountBalance;
	string customerName;

	Bank() {
		accountNumber = 0;
		customerName = "";
		accountBalance = 0;
	}

public:

	//	allocate
	void allocate(Bank*& bnkArr, int noOfAccounts) {

		bnkArr = new Bank[noOfAccounts];

		for (int i = 0;i < noOfAccounts;i++) {
			cout << "Details For Account " << i + 1<<endl;
			bnkArr[i].insertBankAccount();
		}

	}

	void displayAllBankAccounts(Bank*& bnkArr, int noOfAccounts) {

		for (int i = 0;i < noOfAccounts;i++) {
			cout << "Account Details For Account " << i + 1 << endl;
			bnkArr[i].displayBankAcccountDetails();
			cout << endl;
		}

	}

	void deposit(int amount) {
		accountBalance = accountBalance + amount;

		cout << "Your account balance is " << accountBalance << endl;
	}

	void withdraw(int amount) {
		if (amount > accountBalance) {
			cout << "Your account balance is low" << endl;
			return;
		}
	}

	void displayBalance() {
		cout << "Your account balance is " << accountBalance << endl;
	}

	void insertBankAccount() {
		cout << "Enter the Account Number = ";
		cin >> accountNumber;
		cout << "Enter the Customer Name = ";
		cin >> customerName;
		cout << "Enter the Account Balance = ";
		cin >> accountBalance;
		cout << endl;
	}

	void displayBankAcccountDetails() {
		cout << "Enter the Account Number = " << accountNumber << endl;
		cout << "Enter the Customer Name = " << customerName << endl;
		cout << "Enter the Account Balance = " << accountBalance << endl;
		cout << endl;
	}





};
