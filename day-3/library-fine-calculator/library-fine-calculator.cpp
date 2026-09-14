//	4. Library Fine Calculator

//	Create a LibraryMember class with member ID, name, and number of overdue days.Use a constructor to initialize the data.Write a member function to calculate the fine.Use a static data member to store the fine rate per day and a static member function to modify or display the fine rate.

#include"LibraryMemberActions.h"

int main() {

	int choice, noOfRecordsToInsert;
	char proceedAgain;

	LibraryMember* membersArray;

	cout << "How many members you want to insert = ";
	cin >> noOfRecordsToInsert;

	LibraryMemberActions::allocate(membersArray, noOfRecordsToInsert);

	do {
		cout << "Which Opeartion You want to perform";
		cout << "\n1. Display All Members\n2. Display Fine By Search Id\n3. Display Fine By Search Name\n4. Modify the fine\n5. Display all members with fine"<<endl;
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			LibraryMemberActions::displayAllMembers(membersArray, noOfRecordsToInsert);
			break;

		case 2:
			membersArray->displayFineByMemberId(membersArray, noOfRecordsToInsert);
			break;

		case 3:
			membersArray->displayFineByMemberName(membersArray, noOfRecordsToInsert);
			break;

		case 4:
			membersArray->modifyMemberFine(membersArray, noOfRecordsToInsert);
			break;

		case 5:
			LibraryMemberActions::displayMembersWithFine(membersArray, noOfRecordsToInsert);
			break;

		case 6:
			return 0;
			break;

		default:"Invalid Operation";

		}

		cout << "Do you want to proceed again : " << endl;
		cout << "y | n" << endl;
		cin >> proceedAgain;
		cout << endl;

	} while (proceedAgain == 'y' || proceedAgain == 'Y');

}