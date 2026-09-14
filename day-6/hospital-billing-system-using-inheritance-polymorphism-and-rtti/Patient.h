#pragma once
#include<iostream>
#include<string>

using namespace std;

class Patient {

protected:
	int patientID, numberOfDaysAdmitted;
	string patientName;
	int patientAge;

public:
	Patient() {

		this->patientID = 0;
		this->patientName = "";
		this->patientAge = 0;
		this->numberOfDaysAdmitted = 0;
	}

	Patient(int patientID, string patientName, int patientAge, int numberOfDaysAdmitted) {

		this->patientID = patientID;
		this->patientName = patientName;
		this->patientAge = patientAge;
		this->numberOfDaysAdmitted = numberOfDaysAdmitted;
	}

	//	(compile-time binding). The compiler decides which function to execute based purely on the type of the pointer, not the actual object it points to
	//	Virtual make it of run-time so that it pick based on type of object not object-pointer

	//	virtual int calculateBill() = 0; is a pure virtual function
	//	virtual void displayPatientDetails() = 0; is a pure virtual function

	//	Here `virtual int calculateBill()` remove the virtual and see the output 
	//	output = Calculate Bill Inside Patient Class

	virtual int calculateBill() {

		cout << "Calculate Bill Inside Patient Class"<<endl;

		int totalBill = 2000 * numberOfDaysAdmitted; return totalBill;
	}

	virtual void displayPatientDetails() {

		cout << "Patient Details Are --------- " << endl;
		cout << "Patient Id is = " << patientID << endl;
		cout << "Patient Name is = " << patientName << endl;
		cout << "Patient Age is = " << patientAge << endl;
		cout << "Patient Number Of Days Admitted = " << numberOfDaysAdmitted << endl;

	}

	virtual ~Patient() {
	}

};