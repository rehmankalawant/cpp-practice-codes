#pragma once
#include<fstream>
using namespace std;
#include"StudentRecord.h"

class FileIO
{
public:

	static void WriteData()
	{
		fstream fs;
		StudentRecord s1;
		char wish;

		fs.open("students.dat",
			ios::in | ios::out | ios::binary | ios::app);

		if (!fs)
		{
			cout << "\n Unable to open file";
			return;
		}

		do
		{
			cout << "\n Enter Student Details:";
			s1.accept();

			fs.write((char*)&s1, sizeof(StudentRecord));

			if (fs.fail())
			{
				cout << "\n Error while writing record";
				fs.clear();
			}
			else
			{
				cout << "\n Student record added successfully";
			}

			cout << "\n Do you want to add more records: ";
			cin >> wish;

		} while (wish == 'y' || wish == 'Y');

		fs.close();
	}


	static void ReadData()
	{
		fstream fs;
		StudentRecord s1;
		bool found = false;

		fs.open("students.dat",
			ios::in | ios::out | ios::binary | ios::app);

		if (!fs)
		{
			cout << "\n Unable to open file";
			return;
		}

		// Move read pointer to beginning of file
		fs.seekg(0, ios::beg);

		while (fs.read((char*)&s1, sizeof(StudentRecord)))
		{
			if (s1.activeStatus)
			{
				s1.display();
				found = true;
			}
		}

		if (!found)
		{
			cout << "\n No active student records found";
		}

		if (fs.eof())
		{
			fs.clear();
		}

		fs.close();
	}


	static void SearchStudent(int rollNumber)
	{
		fstream fs;
		StudentRecord s1;
		bool found = false;

		fs.open("students.dat",
			ios::in | ios::out | ios::binary | ios::app);

		if (!fs)
		{
			cout << "\n Unable to open file";
			return;
		}

		// Move read pointer to beginning
		fs.seekg(0, ios::beg);

		while (fs.read((char*)&s1, sizeof(StudentRecord)))
		{
			if (s1.rollNumber == rollNumber)
			{
				s1.display();
				found = true;
				break;
			}
		}

		if (!found)
		{
			cout << "\n Student with Roll Number "
				<< rollNumber << " not found";
		}

		if (fs.eof())
		{
			fs.clear();
		}

		fs.close();
	}
};

