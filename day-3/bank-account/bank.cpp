//1. Bank Account

//Create a BankAccount class with account number, customer name, and balance.Use a constructor to initialize account details.Implement member functions to deposit, withdraw,and display the balance.Create multiple account objects using an array of objects.

#include"Bank.h"

int main() {
	int noOfAccounts = 0;

	Bank* bnk = NULL;

	cout << "Enter how many accounts you want to insert : " << endl;
	cin >> noOfAccounts;

	bnk->allocate(bnk, noOfAccounts);
	bnk->displayAllBankAccounts(bnk, noOfAccounts);

}