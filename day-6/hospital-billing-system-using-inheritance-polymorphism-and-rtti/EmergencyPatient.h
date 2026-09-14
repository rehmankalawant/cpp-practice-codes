#pragma once
#include"InPatient.h"

class EmergencyPatient : public InPatient {

private:

	int emergencyServiceCharges, ambulanceCharges;

public:

	EmergencyPatient() {
		emergencyServiceCharges = 0;
		ambulanceCharges=0;

	}

	EmergencyPatient(int patientID, string patientName, int patientAge, int numberOfDaysAdmitted,
		int roomCharges, int doctorConsultationFees, int medicineCharges, int treatmentCharges, int emergencyServicevCharges, int ambulanceCharges)
		: InPatient
		(patientID, patientName, patientAge, numberOfDaysAdmitted, roomCharges, doctorConsultationFees, medicineCharges, treatmentCharges)
	{
		this->emergencyServiceCharges = emergencyServicevCharges;
		this->ambulanceCharges = ambulanceCharges;
	}

	int calculateBill() {

		cout << "Calculate Bill Inside EmergencyPatient Class" << endl;

		int totalBill = emergencyServiceCharges + ambulanceCharges;
		return totalBill;

	}

	virtual void displayPatientDetails() {

		InPatient::displayPatientDetails();
		cout << "Emergency Servicev Charges" << emergencyServiceCharges << endl;
		cout << "Ambulance Charges" << ambulanceCharges << endl;

	}

	void emergencyPatientSpecial() {
		cout << "emergencyPatientSpecial method called";
	}




};
