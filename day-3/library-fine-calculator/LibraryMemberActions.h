#pragma once

#include"LibraryMember.h"

class LibraryMemberActions {

public:
	static void allocate(LibraryMember*& libPtr, int noOfMembers) {
		libPtr = new LibraryMember[noOfMembers];

		for (int i = 0;i < noOfMembers;i++) {
			cout << "Insert Record For Member " << i + 1 << endl;
			libPtr[i].insertMember();
		}
	}

	static void displayAllMembers(LibraryMember*& libPtr, int noOfMembers) {

		for (int i = 0;i < noOfMembers;i++) {
			libPtr[i].showMember();
		}

	}

	static void displayMembersWithFine(LibraryMember*& libPtr, int noOfMembers) {

		for (int i = 0;i < noOfMembers;i++) {
			libPtr[i].displayFine();
		}

	}
};
