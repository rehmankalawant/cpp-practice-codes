#include"CurrentAccount.h"
#include"FixedDepositAccount.h"
#include"SavingsAccount.h"

class HandleAccount {

public:

	static void displayInformation(Account* acPtr) {

		if (typeid(*acPtr) == typeid(CurrentAccount)) {
			CurrentAccount* caPtr;

			caPtr = dynamic_cast<CurrentAccount*>(acPtr);
			caPtr->calculateReturns();
			caPtr->displayAccountInfo();

		}

		if (typeid(*acPtr) == typeid(FixedDepositAccount)) {
			FixedDepositAccount* fdPtr;

			fdPtr = dynamic_cast<FixedDepositAccount*>(acPtr);
			fdPtr->calculateReturns();
			fdPtr->displayAccountInfo();

		}

		if (typeid(*acPtr) == typeid(SavingsAccount)) {
			SavingsAccount* saPtr;

			saPtr = dynamic_cast<SavingsAccount*>(acPtr);
			saPtr->calculateReturns();
			saPtr->displayAccountInfo();

		}

		cout<< endl;
	}


};

int main() {

	Account** acArray;
	int nop, choice;

	cout << "Enter the number of accounts to insert" << endl;
	cin >> nop;

	acArray = new Account * [nop];




	for (int i = 0;i < nop;i++) {

		cout << "Which Account You Want To Insert";
		cout << "\n1. CurrentAccount \n2. FixedDepositAccount \n3. SavingsAccount\n";
		cin >> choice;

		switch (choice) {
		case 1:
			acArray[i] = new CurrentAccount (1001, "Rohit Sharma", 50000.00, 20000.00, 500.00);
			break;

		case 2:
			acArray[i] = new FixedDepositAccount (1002, "Virat Kohli", 100000.00, 100000, 7.5, 12);
			break;

		case 3:
			acArray[i] = new SavingsAccount(1004, "Harshad Mehta", 75000.0, 4.5f, 2000.0);
			break;

		}


	}


	for (int i = 0;i < nop;i++) {

		HandleAccount::displayInformation(acArray[i]);

	}


}