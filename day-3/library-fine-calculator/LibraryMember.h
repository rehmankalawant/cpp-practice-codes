#pragma once

#include<iostream>
#include<string>

using namespace std;

class LibraryMember {
private:
	int memberId, numberOfOverdueDays, totalFine;
	string memberName;
	static int finePerDay;

public:
	LibraryMember() {
		memberId = 0;
		memberName = "";
		numberOfOverdueDays = 0;
		totalFine = 0;
	}

	void insertMember() {
		cout << endl;

		cout << "Enter the Member Id = ";
		cin >> memberId;

		cout << "Enter the Member Name = ";
		cin >> memberName;

		cout << "Enter the Member Number Of Overdues = ";
		cin >> numberOfOverdueDays;

		totalFine = calculateFine();

		cout << endl;
	}

	void showMember() {
		cout << endl;
		cout << "Member Id = " << memberId << endl;
		cout << "Member Name = "<< memberName << endl;
		cout << "Member Number Of Overdues = " << numberOfOverdueDays << endl;
		cout << "Member Total Fine = "<< totalFine << endl;
		cout << endl;
	}

	int calculateFine() {
		return numberOfOverdueDays * LibraryMember::finePerDay;
	}

	void displayFine() {

		cout << "Your id is " << memberId << endl;
		cout << "Your total fine is " << calculateFine() << "/- RS" << endl;
		cout << endl;

	}

	//	Overriding the function so that we can find the member fine -
	//	1. with id
	//	2. with name

	//void displayFineByMemberIdOrName(LibraryMember libMember, int noOfMembers, int targetId)
	//void displayFineByMemberIdOrName(LibraryMember libMember, int noOfMembers, string targetName)

	void displayFineByMemberId(LibraryMember*& libMember, int noOfMembers) {

		int targetId;

		cout << "Enter the id to display fine = ";
		cin >> targetId;
		cout << endl;

		for (int i = 0;i < noOfMembers;i++) {

			if (targetId == libMember[i].memberId) {
				libMember[i].displayFine();
			}

		}

	}


	void displayFineByMemberName(LibraryMember*& libMember, int noOfMembers) {

		string targetName;

		cout << "Enter the name to display fine = ";
		cin >> targetName;
		cout << endl;

		for (int i = 0;i < noOfMembers;i++) {

			if (targetName == libMember[i].memberName) {
				libMember[i].displayFine();
			}

		}

	}

	void modifyMemberFine(LibraryMember*& libMember,int noOfMembers) {

		int memberIdForFineModify=0, modifiedFine=0;

		cout << "Enter the id to change fine = ";
		cin >> memberIdForFineModify;
		cout << endl;

		cout << "How much fine you want to set = ";
		cin >> modifiedFine;
		cout << endl;

		for (int i = 0;i < noOfMembers;i++) {

			if (libMember[i].memberId == memberIdForFineModify) {

				libMember[i].totalFine = modifiedFine;

			}
		}


	}

};

int LibraryMember::finePerDay = 100;