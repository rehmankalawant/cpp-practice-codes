//	12. ATM Menu

//	Create a simple ATM menu using switch - case with options such as Check Balance, Deposit, Widraw, and Exit. Maintain the balance during the program execution.

#include<iostream>

using namespace std;

void depositMoney(int depositAmount) {

	cout << "Money Depositted Successfully - " << depositAmount << " /- RS \n" << endl;

};

void widrawMoney(int widrawAmount) {

	cout << "Money Widrawed Successfully - " << widrawAmount <<" /- RS \n" << endl;

};

void checkBalance() {

	cout << "Your Balance is 10,000,000 /- RS \n" << endl;

};

int main() {

	int depositAmount, widrawAmount,option;
	char again;

	do {
		cout << "\n 1. Check Balance \n 2. Deposit Money \n 3. Widraw Money \n" << endl;
		cout << "\n Enter What You Wanted To Do - \n" << endl;

		cin >> option;

		switch (option) {
		case 1:
			checkBalance();
			break;

		case 2:
			cout << "Enter amount to deposit = ";
			cin >> depositAmount;
			depositMoney(depositAmount);

			break;

		case 3:
			cout << "Enter amount to widraw = ";
			cin >> widrawAmount;
			depositMoney(widrawAmount);

			break;

		default: "Invalid Operation";

		}

		cout << "Do you want to do something else - " << endl;
		cout << "'y' | 'n'" << endl;
		cin >> again;

	} while (again == 'y' || again == 'Y');

	return 0;

}