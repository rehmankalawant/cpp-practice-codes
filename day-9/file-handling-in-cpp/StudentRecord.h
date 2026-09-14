#pragma once
#include<iostream>
#include<cstring>
using namespace std;

struct StudentRecord
{
	int rollNumber;
	char fullName[50];
	char department[20];
	float cgpa;
	bool activeStatus;

	void accept()
	{
		cout << "\n Enter Roll Number: ";
		cin >> rollNumber;

		cin.ignore();

		cout << "\n Enter Full Name: ";
		cin.getline(fullName, 50);

		cout << "\n Enter Department: ";
		cin.getline(department, 20);

		cout << "\n Enter CGPA: ";
		cin >> cgpa;

		cout << "\n Enter Active Status (1-Active / 0-Inactive): ";
		cin >> activeStatus;
	}

	void display()
	{
		cout << "\n----------------------------------------";
		cout << "\n Roll Number  : " << rollNumber;
		cout << "\n Full Name    : " << fullName;
		cout << "\n Department   : " << department;
		cout << "\n CGPA         : " << cgpa;
		cout << "\n Active Status: ";

		if (activeStatus)
			cout << "Active";
		else
			cout << "Inactive";

		cout << "\n----------------------------------------";
	}
};
