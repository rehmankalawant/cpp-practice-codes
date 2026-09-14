#pragma once
#include"Patient.h"


class OutPatient : public Patient {

	int consultationCharges, diagnosticTestsCharges, medicineCharges;

public:

	OutPatient() {

		int consultationCharges = 0;
		diagnosticTestsCharges = 0;
		medicineCharges = 0;

	}

	OutPatient(int patientID, string patientName, int patientAge, int numberOfDaysAdmitted, int consultationCharges, int diagnosticTestsCharges, int medicineCharges)
		:Patient(patientID, patientName, patientAge, numberOfDaysAdmitted) {

		this->consultationCharges = consultationCharges;
		this->diagnosticTestsCharges = diagnosticTestsCharges;
		this->medicineCharges = medicineCharges;

	}

	int calculateBill() {

		cout << "Calculate Bill Inside OutPatient Class" << endl;

		int totalBill = consultationCharges + diagnosticTestsCharges + medicineCharges;
		return totalBill;

	}

	virtual void displayPatientDetails() {

		Patient::displayPatientDetails();
		cout << "Consultation Charges" << consultationCharges << endl;
		cout << "Diagnostic Tests Charges" << diagnosticTestsCharges << endl;
		cout << "Medicine Charges" << medicineCharges << endl;

	}

	void outPatientSpecial() {
		cout << "outPatientSpecial method called";
	}


};
