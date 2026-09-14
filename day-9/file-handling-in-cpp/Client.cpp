#include<iostream>
using namespace std;
#include"FileIO.h"

int main()
{
	char wish;

	do
	{
		int choice;
		int rollNumber;

		cout << "\n\n========== Student Information Records System ==========";
		cout << "\n 1. Add New Student";
		cout << "\n 2. Display All Active Records";
		cout << "\n 3. Search Student by Roll Number";
		cout << "\n Enter the choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			// Add new student record
			FileIO::WriteData();
			break;

		case 2:
			// Display all active student records
			FileIO::ReadData();
			break;

		case 3:
			// Search student by roll number
			cout << "\n Enter Roll Number to search: ";
			cin >> rollNumber;

			FileIO::SearchStudent(rollNumber);
			break;

		default:
			cout << "\n Invalid choice";
		}

		cout << "\n\n Do you want to perform more operations: ";
		cin >> wish;

	} while (wish == 'y' || wish == 'Y');

	return 0;
}
