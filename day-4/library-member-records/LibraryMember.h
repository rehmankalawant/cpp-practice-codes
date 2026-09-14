#pragma once
#include<string>

using namespace std;

class LibraryMember {

private :
	int memberId, numberOfBooksIssued;
	string memberName;

public:

	LibraryMember() {
		memberId = 0;
		memberName = "";
		numberOfBooksIssued = 0;
	}

	//	copy constructor
	//	obj1 = obj2  --- LibraryMember obj2(obj1)

	LibraryMember(LibraryMember& copyObject) {

		this->memberId = copyObject.memberId;
		this->memberName = copyObject.memberName;
		this->numberOfBooksIssued = copyObject.numberOfBooksIssued;

	}

	void accept() {
		cout << "Enter the member id = ";
		cin >> memberId;
		cout << "Enter the member name = ";
		cin >> memberName;
		cout << "Enter the number of books issued = ";
		cin >> numberOfBooksIssued;
	}

	void display() {

		cout << "The data for member " << this->memberId<<endl;
		cout << "The member id is = " << memberId << endl;
		cout << "The member name is = " << memberName << endl;
		cout << "The number of books issued are = " << numberOfBooksIssued << endl << endl;
	}

	~LibraryMember() {

		cout << "The memory is cleared automatically";
	}
	
	

};