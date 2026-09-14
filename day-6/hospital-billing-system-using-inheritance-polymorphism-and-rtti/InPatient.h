#pragma once
#include"Patient.h"

class InPatient : public Patient {

	int roomCharges, doctorConsultationFees, medicineCharges, treatmentCharges;

public:

	InPatient() {
		roomCharges = 0;
		doctorConsultationFees = 0;
		medicineCharges = 0;
		treatmentCharges = 0;

	}


	InPatient(int patientID, string patientName, int patientAge, int numberOfDaysAdmitted,
		int roomCharges, int doctorConsultationFees, int medicineCharges, int treatmentCharges)
		:Patient(patientID, patientName, patientAge, numberOfDaysAdmitted) {

		this->roomCharges = roomCharges;
		this->doctorConsultationFees = doctorConsultationFees;
		this->medicineCharges = medicineCharges;
		this->treatmentCharges = treatmentCharges;

	}

	int calculateBill() {

		cout << "Calculate Bill Inside InPatient Class" << endl;

		int totalBill = (100 * roomCharges) + doctorConsultationFees + medicineCharges + treatmentCharges;

		return totalBill;

	}

	virtual void displayPatientDetails() {

		Patient::displayPatientDetails();
		cout << "Room charges" << roomCharges<< endl;
		cout << "Doctor Consultation Fees" << doctorConsultationFees << endl;
		cout << "Medicine Charges" << medicineCharges << endl;
		cout << "Treatment Charges" << treatmentCharges << endl;

	}

	void inPatientSpecial() {
		cout << "inPatientSpecial method called" << endl;
	}

};
