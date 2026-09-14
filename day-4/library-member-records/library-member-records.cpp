//	2. Library Member Records
//	Create a LibraryMember class with member ID, name, and number of books issued. Initialize an object using a constructor and create another object using a copy constructor. Use a destructor to display a message when a member object is removed

#include<iostream>
#include"LibraryMember.h"

using namespace std;

int main() {

	LibraryMember member1;

	member1.accept();

	cout << endl;

	member1.display();

	LibraryMember member2(member1);

	member2.display();

}